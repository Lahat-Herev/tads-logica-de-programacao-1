#include <stdio.h>
int main()
{
	int a, b, c, d, diferenca;
	printf("\n Entre com o primeiro valor: ");
	scanf("%d", &a);
	printf("\n Entre com o segundo valor: ");
	scanf("%d", &b);
	printf("\n Entre com o terceiro valor: ");
	scanf("%d", &c);
	printf("\n Entre com o quarto valor: ");
	scanf("%d", &d);
	diferenca = (a * b) - (c * d);
	printf("\n DIFERENCA = %d", diferenca);
	return 0;
}
