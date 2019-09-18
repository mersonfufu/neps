#include <iostream>
using namespace std;

int main(){
	int tdias, saldo, dia = 1, transa, msaldo;
	cin >> tdias >> saldo;
	msaldo = saldo;
	while(dia <= tdias){
		cin >> transa;
		saldo = saldo + transa;
		if(saldo <= msaldo)
			msaldo = saldo;
		dia++;
	}
	cout << msaldo;
	return 0;
}