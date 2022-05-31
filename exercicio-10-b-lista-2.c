#include <stdio.h>
#include <math.h>

int main ()
{
	double a, b, c, d, mediaQuadratica;
	printf("Digite o valor a: \n");
	scanf("%lf", &a);
	printf("Digite o valor b: \n");
	scanf("%lf", &b);
	printf("Digite o valor c: \n");
	scanf("%lf", &c);
	printf("Digite o valor d: \n");
	scanf("%lf", &d);
	mediaQuadratica = sqrt((pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2)) / 4);
	printf("A media quadratica e: %.2f \n", mediaQuadratica);
	return 0;
}
