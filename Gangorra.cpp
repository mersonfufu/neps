#include <iostream>
using namespace std;

int main(){
	int pe, ce, pd, cd;
	cin >> pe >> ce >> pd >> cd;
	if(
		pe < 10 || pe > 100 ||
		ce < 10 || ce > 100 ||
		pd < 10 || pd > 100 ||
		cd < 10 || cd > 100
	)
		cout << "entrada invalida,estuprado mental";
	else if(pe * ce == pd * cd)
		cout << "0";
	else if(pe * ce < pd * cd)
		cout << "1";
	else if(pe * ce > pd * cd)
		cout << "-1";
	return 0;
}