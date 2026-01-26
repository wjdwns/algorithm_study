#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N, M, i;
	int sum=0;
	cin >> N >> M;
	int numbers[N];
	int sumNumbers[N];
	for(i=0;i<N;i++){
		cin >> numbers[i];
		if(i == 0){
			sumNumbers[0] = numbers[0];
		}else{
			sumNumbers[i] = sumNumbers[i-1] + numbers[i];
		}
	}

	for(i=0;i<N;i++){
		for(int j=i;j<N;j++){
			if(i==j && (numbers[i]%M == 0)){
				sum++;
			}else if(i!=j){
				if(i<2 && (sumNumbers[j]%M== 0)){
					sum++;
				}else if((sumNumbers[j-1] - sumNumbers[i-2])%M == 0){
					sum++;
				}
			}
		}
	}
	
	cout << sum;
	return 0;
}