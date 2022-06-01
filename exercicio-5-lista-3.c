#include <stdio.h>
#include <math.h>
int main ()
{
	int a, b, c, resultado;
	printf("Digite o valor de a: \n");
	scanf("%d", &a);
	printf("Digite o valor b: \n");
	scanf("%d", &b);
	printf("Digite o valor c: \n");
	scanf("%d", &c);
	resultado = pow(b, 2) - ((4 * a) * c);
	if (resultado < 0)
		printf("A equação não tem solução real");
	if (resultado >= 0)
		printf("O resultado e %d \n", resultado);
	return 0;
}
