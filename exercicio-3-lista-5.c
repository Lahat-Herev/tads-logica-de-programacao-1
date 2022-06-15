#include <stdio.h>
int main()
{
	int i = 0, soma = 0; 
	while (i <= 100)
	{
		if (i %  2 == 1)
			soma += i;
		i++;
	}
	printf("Soma = %d", soma);
}
