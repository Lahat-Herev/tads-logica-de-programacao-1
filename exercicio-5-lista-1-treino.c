#include <stdio.h>
int main()
{
	double valorA, valorB, media;
	float pesoA, pesoB;
	pesoA = 3.5;
	pesoB = 7.5;
	printf("\n Entre com o valor A: ");
	scanf("%lf", &valorA);
	printf("\n Entre com o valor B: ");
	scanf("%lf", &valorB);
	media = ((valorA * pesoA) + (valorB * pesoB))/11;
	printf("MEDIA = %.5f", media);
	return 0;
}
