#include <stdio.h>
int main ()
{
	double compra, valorPrestacao;
	printf("Entre com o valor da compra: \n");
	scanf("%lf", &compra);
	valorPrestacao = compra / 5;
	printf("5 x %.2f = %.2f \n", valorPrestacao, compra);
	return 0;
}
