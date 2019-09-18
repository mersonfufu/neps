#include <iostream>
using namespace std;

int main(){
	double tpedro, tpaulo;
	cin >> tpedro >> tpaulo;
	if(tpedro <= tpaulo)
		cout << "Pedro";
	else
		cout << "Paulo";
	return 0;
}