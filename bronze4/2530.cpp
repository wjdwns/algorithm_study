#include <iostream>
using namespace std;

int main() {
	int hour, min, sec;
	int time;

	cin >> hour >> min >> sec >> time;
	hour = hour * 3600;
	min = min * 60;
	time = hour + min + sec + time;

	cout << (time/3600)%24 << " " << (time%3600)/60 << " " << time%60;
	return 0;
}