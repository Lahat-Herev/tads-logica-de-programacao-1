#include <stdio.h>
int main ()
{
	int v1, v2, aux;
	printf("Entre com o valor 1: ");
	scanf("%d", &v1);
	printf("Entre com o valor 2: ");
	scanf("%d", &v2);
	aux = v1;
	v1 = v2;
	v2 = aux;
	
	printf("O valor de v1 agora e %d \n e o valor de v2 agora e: %d", v1, v2);
	return 0;
}
