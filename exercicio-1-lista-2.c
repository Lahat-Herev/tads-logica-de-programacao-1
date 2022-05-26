#include <stdio.h>
int main ()
{
	float valorPago, precoProduto, troco;
	printf("Entre com o valor pago pelo cliente: \n");
	scanf("%f", &valorPago);
	printf("Entre com o preco do produto: \n");
	scanf("%f", &precoProduto);
	troco = valorPago - precoProduto;
	printf("O troco e: %.2f \n", troco);
	return 0;
}
