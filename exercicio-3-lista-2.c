#include <stdio.h>
int main ()
{
	float notaA, notaB, notaC;
	double media;
	
	printf("Entre com a primeira nota: \n");
	scanf("%f", &notaA);
	printf("Entre com a segunda nota: \n");
	scanf("%f", &notaB);
	printf("Entre com a terceira nota: \n");
	scanf("%f", &notaC);
	
	media = (notaA + notaB + notaC) / 3;
	
	printf("A media e: %.3f \n", media);
	return 0;
}
