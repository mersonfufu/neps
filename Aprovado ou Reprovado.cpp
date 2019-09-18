#include <iostream>
using namespace std;

int main(){
	float notau, notad, media;
	cin >> notau >> notad;
	media = (notau + notad) / 2;
	if(media < 4)
		cout << "Reprovado";
	else {
		if(media < 7)
			cout << "Recuperacao";
		else
			cout << "Aprovado";
	}
	return 0;
}