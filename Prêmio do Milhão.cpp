#include <iostream>
using namespace std;

int main(){
	int tdias, dia = 1, valorh, valort = 0, cont = 1;
	cin >> tdias;
	while(dia <= tdias){
		cin >> valorh;
		valort = valort + valorh;
		if(valort < 1000000)
			cont++;
		dia++;
	}
	cout << cont;
	return 0;
}