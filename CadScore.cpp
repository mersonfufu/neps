#include <iostream>
using namespace std;

int main(){
	int p0, p, pf, fases;
	cin >> p0 >> fases;
	pf = p0;
	for(int contf = 1; cin >> p; contf++){
		pf = pf + p;
		if(pf < 0)
			pf = 0;
		if(pf > 100)
			pf = 100;
		if(contf >= fases)
			break;
	}
	cout << pf;
	return 0;
}