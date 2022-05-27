#include <stdio.h>
#include <math.h>
int main ()
{
	double numero;
	printf("Digite um numero: \n");
	scanf("%lf", &numero);
	printf("O numero arredondado para cima e: %.2f \n", ceil(numero));
	printf("O numero arredondado para baixo e: %.2f \n", floor(numero));
	return 0;
}
