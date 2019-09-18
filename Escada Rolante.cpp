#include <iostream>
using namespace std;

int main(){
	int pessoa, tempo, tfinal = 0, total = 0;
	cin >> pessoa;
	for(int cont = 0; cont < pessoa; cont++){
		cin >> tempo;
		if(tempo >= tfinal)
			total += 10;
		else
			total = total + tempo + 10 - tfinal;
		tfinal = tempo + 10;
	}
	cout << total;
	return 0;
}