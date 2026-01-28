#include <iostream>
using namespace std;

int main() {
	int N, min, max;
	cin >> N;
	for(int i=0;i<N;i++){
		int num;
		cin >> num;
		if(i==0){
			min = num;
			max = num;
		}else{
			if(min>num){
				min = num;
			}else if(max < num){
				max = num;
			}
		}
	}
	cout << min << " " << max;
	return 0;
}