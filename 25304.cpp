#include <iostream>
using namespace std;

int main() {
	int total, N, sum=0;
	cin >> total >> N;
	for(int i=0; i<N; i++){
		int a,b;
		cin >> a >> b;
		sum += (a * b);
	}
	if(sum==total) cout << "Yes";
	else cout << "No";
	return 0;
}