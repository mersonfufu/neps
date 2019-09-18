#include <iostream>
using namespace std;

int main(){
	int secoes, somaa = 0, somab = 0;
	cin >> secoes;
	int vetor[secoes];
	for(int i = 0; i < secoes; i++){
		cin >> vetor[i];
		somaa = somaa + vetor[i];
	}
	for(int i = 0; i < secoes; i++){
		somab = somab + vetor[i];
		if(somab >= somaa / 2){
			cout << i + 1;
			break;
		}
	}
	return 0;
}