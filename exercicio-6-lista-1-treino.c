#include <stdio.h>
int main()
{
	float a, b, c, media, pesoA, pesoB, pesoC;
	pesoA = 2.0;
	pesoB = 3.0;
	pesoC = 5.0;
	printf("\n Entre com a primeira nota: ");
	scanf("%f", &a);
	printf("\n Entre com a segunda nota: ");
	scanf("%f", &b);
	printf("\n Entre com a terceira nota: ");
	scanf("%f", &c);
	media = ((a * pesoA) + (b * pesoB) + (c * pesoC)) / (pesoA + pesoB + pesoC);
	printf("MEDIA = %.1f \n", media);
	return 0;
}
