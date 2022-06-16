#include <stdio.h>
int main ()
{
	int i = 1, numero;
	float media = 0;
	int qtdNumeros = 15;
	int impares = 0;
	while (i <= qtdNumeros)
	{
		printf("Digite um numero: \n");
		scanf("%d", &numero);
		if (numero > 10)
		{
			media += numero;
			impares++;
		}
		i++;
	}
	
	media /= impares;
	printf("A media e: %.2f e a quantidade de numeros e: %d", media, impares);
	return 0;
}
