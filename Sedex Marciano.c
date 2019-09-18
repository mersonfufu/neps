#include <stdio.h>
int main(){
	int largura, altura, profundidade, raio;
	scanf("%d %d %d %d", &largura, &altura, &profundidade, &raio);
	if((largura * largura) + (altura * altura) + (profundidade * profundidade) <= (4 * raio * raio)) printf("S");
	else printf("N");
	return 0;
}