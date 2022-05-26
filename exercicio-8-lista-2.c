#include <stdio.h>
int main ()
{
	int inteiro, somaDigitos, restoMilhar, restoCentena, restoDezena, restoUnidade;
	printf("Digite o numeral: \n");
	scanf("%d", &inteiro);
	restoMilhar = inteiro / 1000; 
	inteiro = inteiro % 1000;
	restoCentena = inteiro / 100;
	inteiro = inteiro % 100;
	restoDezena = inteiro / 10;
	inteiro = inteiro % 10;
	restoUnidade = inteiro / 1;
	somaDigitos = restoMilhar + restoCentena + restoDezena + restoUnidade;
	printf("A soma dos algarismos do numero e: %d \n", somaDigitos);
	return 0;
}
