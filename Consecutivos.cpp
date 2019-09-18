#include <iostream>
using namespace std;

int main(){
	int quant, cont, numero, anterior, pontos = 1, mpontos = 0;
	cin >> quant;
	for(cont = 1; cin >> numero; cont++){
		if(cont == 1)
			anterior = numero;
		else {
			if(anterior == numero){
				pontos++;
				if(pontos > mpontos)
					mpontos = pontos;
				anterior = numero;
			} else {
				pontos = 1;
				anterior = numero;
			}
		}
		if(cont == quant)
			break;
	}
	cout << mpontos;
	return 0;
}