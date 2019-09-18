#include <iostream>
using namespace std;

int main(){
	int nc, nm, cont = 1, n1, n2, apr = 0;
	cin >> nc >> nm;
	//n1+n2 nunca sera maior que 800
	if(
		nc < 1 || nc > 1000 ||
		nm < 1 || nm > 1000
	)
		cout << "entrada invalida,distraido";
	else {
		while(cont <= nc){
			cin >> n1 >> n2;
			if(
				n1 < 0 || n1 > 400 ||
				n2 < 0 || n2 > 400
			)
				cout << "entrada invalida,mogolao. tente novamente... ";
			else {
				if(n1 + n2 >= nm)
					apr++;
				cont++;
			}
		}
		cout << apr;
	}
	return 0;
}