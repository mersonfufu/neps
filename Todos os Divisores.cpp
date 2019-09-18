#include <iostream>
using namespace std;

int main(){
	int numero, divisor = 1;
	cin >> numero;
	while(divisor <= numero){
		if(numero % divisor == 0)
			cout << divisor << " ";
		divisor++;
	}
	return 0;
}