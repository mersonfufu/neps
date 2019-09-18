#include <math.h>
#include <stdio.h>

int main(){
	double base, exp;
	scanf("%lf %lf", &base, &exp);
	printf("%.4lf", pow(base, exp));
	return 0;
}