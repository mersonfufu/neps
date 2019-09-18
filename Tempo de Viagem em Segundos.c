#include <stdio.h>

int main(){
	int dia, hora, minuto, aux;
	scanf("%d %d %d", &dia, &hora, &minuto);
	
	scanf("%d", &aux);
	dia = aux - dia;
	
	scanf("%d", &aux);
	hora = aux - hora;
	
	scanf("%d", &aux);
	minuto = aux - minuto;
	
	printf("%d", dia*86400 + hora*3600 + minuto*60);
	
	return 0;
}