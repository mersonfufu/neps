#include <iostream>
using namespace std;

int main(){
	int vc, ec, gc, vf, ef, gf;
	cin >> vc >> ec >> gc >> vf >> ef >> gf;
	if(
		vc < 0 || vc > 100 ||
		ec < 0 || ec > 100 ||
		gc < -1000 || gc > 1000 ||
		vf < 0 || vf > 100 ||
		ef < 0 || ef > 100 ||
		gf < -1000 || gf > 1000
	)
		cout << "entrada invalida,tonto";
	else if((3 * vc + ec) > (3 * vf + ef))
		cout << "C";
	else if((3 * vc + ec) < (3 * vf + ef))
		cout << "F";
	else if(gc > gf)
		cout << "C";
	else if(gc < gf)
		cout << "F";
	else
		cout << "=";
	return 0;
}