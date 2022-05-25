#include <stdio.h>
int main ()
{
	int valorA, valorB, produto;
	printf("Entre com o primeiro valor: \n");
	scanf("%d", &valorA);
	printf("Entre com o segundo valor: \n");
	scanf("%d", &valorB);
	produto = valorA * valorB;
	printf("PROD = %d \n", produto);
	return 0;
}
