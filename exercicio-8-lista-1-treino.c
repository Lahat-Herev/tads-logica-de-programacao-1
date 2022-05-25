#include <stdio.h>
int main()
{
	int numero;
	float valorPorHora, salario, qtdHorasTrabalhadas;
	printf("Digite o numero do funcionario: ");
	scanf("%d", &numero);
	printf("Digite a quantidade de horas trabalhadas do funcionario: ");
	scanf("%f", &qtdHorasTrabalhadas);
	printf("Digite o valor da hora trabalhada pelo funcionario: ");
	scanf("%f", &valorPorHora);
	salario = qtdHorasTrabalhadas * valorPorHora;
	printf("NUMBER = %d \n", numero);
	printf("SALARY = U$ %.2f \n", salario);
	return 0;
}
