#include <iostream>
using namespace std;

int main() {
	int student[31] = {0,};
	int num, min = 0;
	for(int i=0;i<28;i++){
		cin >> num;
		student[num] = 1;
	}
	for(int i=1;i<31;i++){
		if(student[i]==0){
			if(min==0){
				min = i;
			}else{
				if(i > min){
					cout << min<< endl << i;
				}else{
					cout << i<< endl << min;
				}
			}
		}
	}

	return 0;
}