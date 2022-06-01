#include <stdio.h>
int main ()
{
	float salario, salarioReajustado;
	printf("Digite o salario do funcionario: \n");
	scanf("%f", &salario);
	if(salario > 0 && salario <= 900)
		salarioReajustado = salario + (salario * 0.20); 
	if(salario > 900 && salario <= 1300)
		salarioReajustado = salario + (salario * 0.10); 
	if(salario > 1300 && salario <= 1800)
		salarioReajustado = salario + (salario * 0.05); 
	if(salario > 1800)
		printf("Não teve reajuste. \n"); 
	printf("O valor de reajuste do salario do funcionario e %.2f \n e o salario base do funcionario e: %.2f", salarioReajustado, salario);
	return 0;
}
