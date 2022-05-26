#include <stdio.h>
#include <math.h>
int main ()
{
	int x, y, resultado;
	printf("Digite o valor de x: \n");
	scanf("%d", &x);
	printf("Digite o valor de y: \n");
	scanf("%d", &y);
	resultado = pow(x, y);
	printf("O resultado de %d elevado a %d e: %d \n", x, y, resultado);
}
