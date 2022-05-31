#include <stdio.h>
int main () 
{
	double numero;
	printf("Digite um numero: \n");
	scanf("%lf", &numero);
	if (numero < 0)
	{
		printf("O numero %.2f e negativo", numero);
	}
	if (numero > 0)
	{
		printf("O numero %.2f e positivo", numero);
	}
	if (numero == 0)
	{
		printf("O numero %.2f e nulo", numero);
	}
	return 0;
}
