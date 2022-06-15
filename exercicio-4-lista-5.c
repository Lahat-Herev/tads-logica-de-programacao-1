#include <stdio.h>
int main()
{
	int i = 0, somaPares = 0, somaImpares =0, numero;
	printf("Digite um numero: \n");
	scanf("%d", &numero); 
	while (i <= numero)
	{
		if (i %  2 == 1)
			somaImpares += i;
		if (i %  2 == 0)
			somaPares += i;
		i++;
	}
	printf("Soma dos pares: = %d \n Soma dos impares: %d \n", somaPares, somaImpares);
}

