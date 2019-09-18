#include <iostream>
using namespace std;

int main(){
	int bancos, revendas, reserva[20], devedor, credor, valor, governo = 0;
	while(1){
		cin >> bancos >> revendas;
		if(bancos == 0 && revendas == 0)
			break;
		for(int i = 1; i <= bancos; i++)
			cin >> reserva[i];
		//operacoes
		for(int i = 1; i <= revendas; i++){
			cin >> devedor >> credor >> valor;
			reserva[devedor] = reserva[devedor] - valor;
			reserva[credor] = reserva[credor] + valor;
		}
		//procurar negativos
		for(int i = 1; i <= bancos; i++)
			if(reserva[i] < 0)
				governo = 1;
		//resultado
		if(governo == 1)
			cout << "N\n";
		else
			cout << "S\n";
	}
	return 0;
}