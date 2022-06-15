#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0, quadrado, cubo;
	while (i <= 10)
	{
		quadrado = pow(i, 2);
		cubo = pow(i, 3);
		printf("O quadrado de %d e: %d e o cubo e: %d \n", i, quadrado, cubo);
		i++;
	}
}


