#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N, M;
	int j,k;
	cin >> N >> M;
	int numbers[N];
	int sumNumbers[N];
	for(int i=0;i<N;i++){
		cin >> numbers[i];
		if(i==0){
			sumNumbers[0]= numbers[0];
		}else{
			sumNumbers[i] = sumNumbers[i-1] + numbers[i];
		}
	}
	for(int i=0;i<M;i++){
		cin >> j >> k;
		if(j-2<0){
			cout << sumNumbers[k-1] << "\n";
		}else{
			cout << sumNumbers[k-1] - sumNumbers[j-2] << "\n";
		}
	}
	return 0;
}