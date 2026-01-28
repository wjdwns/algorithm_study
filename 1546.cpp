#include <iostream>
using namespace std;

int main() {
	int N, max;
	cin >> N;
	int test[N];
	double aver;
	for(int i=0;i<N;i++){
		cin >> test[i];
	}
	max = test[0];
	for(int i=1;i<N;i++){
		if(max<test[i]){
			max = test[i];
		}
	}
	for(int i=0;i<N;i++){
		aver += (double)test[i]/(double)max*100;
	}
	cout.precision(3);
	cout << aver/N;
	return 0;
}