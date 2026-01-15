#include <iostream>
using namespace std;

int main() {
	int burger[3], drink[2];
	cin >> burger[0] >> burger[1] >> burger[2] >> drink[0] >> drink[1];
	int setBurger, setDrink;
	setBurger = burger[0];
	setDrink = drink[0];
	for(int i=1;i<3;i++){
		if(burger[i] < setBurger){
			setBurger = burger[i];
		}
	}
		for(int i=1;i<2;i++){
		if(drink[i] < setDrink){
			setDrink = drink[i];
		}
	}
	cout << setBurger + setDrink - 50;
	
	return 0;
}