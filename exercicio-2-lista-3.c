#include <stdio.h>
int main ()
{
	int numero;
	printf("Digite um numero: \n");
	scanf("%d", &numero);
	if (numero % 3 == 0)
		printf("O numero %d e multiplo de 3. ", numero);
	if (numero % 3 == 1)
		printf("O numero %d nao e multiplo de 3. ", numero);
	return 0;
}
