#include <iostream>
using namespace std;

int main(){
	int ou, od, pu, pd, bu, bd;
	cin >> ou >> pu >> bu;
	cin >> od >> pd >> bd;
	if(ou == od){
		if(pu == pd){
			if(bu == bd)
				cout << "entrada invalida";
			else {
				if(bu > bd)
					cout << "A";
				else
					cout << "B";
			}
		} else {
			if(pu > pd)
				cout << "A";
			else
				cout << "B";
		}
	} else {
		if(ou > od)
			cout << "A";
		else
			cout << "B";
	}
	return 0;
}