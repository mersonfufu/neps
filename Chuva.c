#include <stdio.h>

int main(){
	int tamanho, i, j, aux;
	int mapas[101][101];
	scanf("%d", &tamanho);
	for(i = 0; i < tamanho; i++)
		for(j = 0; j < tamanho; j++)
			scanf("%d", &mapas[i][j]);
	for(i = 0; i < tamanho; i++)
		for(j = 0; j < tamanho; j++){
			scanf("%d", &aux);
			mapas[i][j] += aux;
		}
	for(i = 0; i < tamanho; i++){
		for(j = 0; j < tamanho; j++){
			printf("%d", mapas[i][j]);
			if(j < tamanho - 1)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}