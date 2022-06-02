#include <stdio.h>
#include <math.h>
int main ()
{
	int ladoA, ladoB, ladoC; 
	printf("Digite o lado A: \n");
	scanf("%d", &ladoA);
	printf("Digite o lado A: \n");
	scanf("%d", &ladoB);
	printf("Digite o lado A: \n");
	scanf("%d", &ladoC);
	if (ladoA == ladoB && ladoB == ladoC)
		printf("O triangulo e equilatero! \n");		
	else if (ladoA != ladoB && ladoB != ladoC && ladoC != ladoA)
		printf("O triangulo e escaleno! \n");
	else
		printf("O triangulo e isosceles! \n");
	return 0;
}
