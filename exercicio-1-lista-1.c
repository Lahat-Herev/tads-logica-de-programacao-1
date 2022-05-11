#include <stdio.h> 
int main()
{
	int valorA, valorB, soma, subtracao, multiplicacao;
	float divisao;
	printf("\n Entre com o valor A: ");
	scanf("%d", &valorA);
	printf("\n Entre com o valor B: ");
	scanf("%d", &valorB);
	soma = valorA + valorB;
	subtracao = valorA - valorB;
	multiplicacao = valorA * valorB; 
	divisao = (float) valorA / valorB;
	printf("O resultado da soma e: %i \n", soma);
	printf("O resultado da subtracao e: %i \n", subtracao);
	printf("O resultado da multiplicacao e: %i \n", multiplicacao);
	printf(" E o resultado da divisao e: %.2f \n", divisao);
	return 0;
}
