#include <math.h>
#include <stdio.h>

int main(){
	int quant;
	double num;
	scanf("%d", &quant);
	while(quant--){
		scanf("%lf", &num);
		printf("%.4f\n", sqrt(num));
	}
	return 0;
}