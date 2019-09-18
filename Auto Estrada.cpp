#include <iostream>
using namespace std;

int main(){
	int metros, total = 0;
	char bloco;
	cin >> metros;
	for(int cont = 0; cont < metros; cont++){
		cin >> bloco;
		switch(bloco){
			case 'P':
			case 'C':
				total += 2;
				break;
			case 'A':
				total++;
				break;
		}
	}
	cout << total;
	return 0;
}