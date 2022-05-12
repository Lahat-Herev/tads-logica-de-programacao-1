#include <stdio.h>
int main ()
{
	float totalVendas, comissao, salarioVendedor;
	printf("Digite o total de vendas:");
	scanf("%f", &totalVendas);
	printf("\n Qual e o salario do vendedor? ");
	scanf("%f", &salarioVendedor);
	comissao = 0.10 * totalVendas; 
	salarioVendedor += comissao; 
	printf("\n O salario do funcionario mais comissao e: %.2f", salarioVendedor);
	printf("\n A a comissao foi de: %.2f", comissao);
	return 0;
}
