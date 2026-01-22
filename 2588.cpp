#include <iostream>
using namespace std;

int main() {
	int val1, val2;
	cin >> val1 >> val2;
	cout << (val2%10)*val1 << endl;
	cout << ((val2/10)%10)*val1 << endl;
	cout << (val2/100)*val1 << endl;
	cout << val2*val1;
	return 0;
}