#include <stdio.h>
#include <math.h>
int main ()
{
	double numero, raizQuadrada;
	printf("Digite um numero: \n");
	scanf("%lf", &numero);
	
	raizQuadrada = sqrt(numero);
	
	printf("A raiz quadrada do numero e: %.2f \n", raizQuadrada);
	return 0;
}
