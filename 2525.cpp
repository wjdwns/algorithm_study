#include <iostream>
using namespace std;

int main() {
	int A, B, C;//시 분, +분
	cin >> A >> B >> C;
	B = B + C;
	A = A + B/60;
	cout << A%24 << " " << B%60;
	return 0;
}