#include <stdio.h>
int main ()
{
	float salarioFixo, totalVendas, salarioFinal, comissao;
	comissao = 0.15;
	printf("Entre com o salario fixo do funcionario: \n");
	scanf("%f", &salarioFixo);
	printf("Entre com o total de vendas do funcionario: \n");
	scanf("%f", &totalVendas);
	salarioFinal =  salarioFixo + (totalVendas * comissao);
	printf("O salario final e: %.3f reais \n", salarioFinal);
	return 0;
}
