#include <stdio.h>
int main ()
{
	int numero;
	printf("Digite o numero: \n");
	scanf("%d", &numero);
	if (numero < 10 || numero > 100)
		printf("O número não está no intervalo permitido.");
	if (numero >= 10 && numero <= 100)
		printf("Número está entre 10 e 100 – intervalo permitido. \n");
	
	return 0;
}
