#include <stdio.h>

int main(){
	int maior, tbolas, i, j, valor, possivel;
	int bolas[91];
	scanf("%d %d", &maior, &tbolas);
	while(maior, tbolas){
		for(i = 0; i < tbolas; i++)
			scanf("%d", &bolas[i]);
		for(valor = 1; valor <= maior; valor++){
			possivel = 0;
			for(i = 0; i < tbolas; i++){
				if(bolas[i] == valor){
					possivel = 1;
					break;
				} else {
					for(j = i + 1; j < tbolas; j++){
						if(
							bolas[i] - bolas[j] == valor ||
							-(bolas[i] - bolas[j]) == valor ||
							bolas[j] - bolas[i] == valor ||
							-(bolas[j] - bolas[i]) == valor
						){
							possivel = 1;
							break;
						}
					}
					if(possivel == 1)
						break;
				}
			}
			if(possivel == 0)
				break;
		}
		if(possivel == 1)
			printf("Y\n");
		else
			printf("N\n");
		scanf("%d %d", &maior, &tbolas);
	}
	return 0;
}