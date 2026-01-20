#include <iostream>
using namespace std;

int main() {
	int N, M;
	int i,j,k;
	cin >> N >> M;
	int bukket[N] = {0,};

	for(int l=M;l>0;l--){
		cin >> i >>j >>k;
		for(int m=i-1;m<j;m++){
			bukket[m]= k;
		}
	}

	for(int l=0;l<N;l++){
		cout << bukket[l]<< " ";
	}
	return 0;
}