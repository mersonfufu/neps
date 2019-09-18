#include <iostream>
using namespace std;

int main(){
	int ntipos, rotulos, menor;
	cin >> ntipos;
	for(int cont = 1; cin >> rotulos; cont++){
		if(cont == 1)
			menor = rotulos;
		else {
			if(rotulos < menor)
				menor = rotulos;
		}
		if(cont == ntipos)
			break;
	}
	cout << menor;
	return 0;
}