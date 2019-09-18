#include <iostream>
using namespace std;

int main(){
	int bandejas, latas, copos, quebras = 0;
	cin >> bandejas;
	for(int cont = 1; cin >> latas >> copos; cont++){
		if(latas > copos)
			quebras = quebras + copos;
		if(cont == bandejas)
			break;
	}
	cout << quebras;
	return 0;
}