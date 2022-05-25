#include <stdio.h>
int main()
{
	int codigo1, codigo2, numeroPecas1, numeroPecas2;
	float valorUnitarioPeca1, valorUnitarioPeca2, total;
	printf("Digite o codigo da peca 1: \n");
	scanf("%d", &codigo1);
	printf("Digite o numero de pecas 1: \n");
	scanf("%d", &numeroPecas1);
	printf("Digite o valor unitario da peca 1: \n");
	scanf("%f", &valorUnitarioPeca1);
	printf("Digite o codigo da peca 2: \n");
	scanf("%d", &codigo2);
	printf("Digite o numero de pecas 2: \n");
	scanf("%d", &numeroPecas2);
	printf("Digite o valor unitario da peca 2: \n");
	scanf("%f", &valorUnitarioPeca2);
	
	total = (numeroPecas1 * valorUnitarioPeca1) + (valorUnitarioPeca2 * numeroPecas2);
	printf("VALOR A PAGAR: R$ %.2f \n", total);
	
	return 0;
}
