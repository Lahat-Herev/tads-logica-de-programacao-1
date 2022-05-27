#include <stdio.h>
int main ()
{
	double a, b, c, d,resultado;
	printf("Digite o valor a: \n");
	scanf("%lf", &a);
	printf("Digite o valor b: \n");
	scanf("%lf", &b);
	printf("Digite o valor c: \n");
	scanf("%lf", &c);
	printf("Digite o valor d: \n");
	scanf("%lf", &d);
	resultado = 4 / ( (1 / a) + (1 / b) + (1 / c) + (1 / d));
	printf("A media harmonica e: %.2f \n", resultado);
	return 0;
}
