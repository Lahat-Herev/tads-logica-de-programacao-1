#include <stdio.h>
int main()
{
	double area, pi, raio;
	printf("Digite o primeiro numero: \n");
	pi = 3.14159;
	scanf("%lf", &raio);
	area = pi * (raio * raio);
	printf("A=%.4f", area);
	return 0;
}
