#include <stdio.h>
int main () 
{
	float distanciaPercorrida, totalCombustivelGasto, consumo;
	printf("Digite qual foi a distancia percorrida em km: \n");
	scanf("%f", &distanciaPercorrida);
	printf("Digite o total de combustivel gasto: \n");
	scanf("%f", &totalCombustivelGasto);
	consumo = distanciaPercorrida / totalCombustivelGasto;
	printf("O consumo medio de combustivel e: %.2f \n", consumo);
	return 0;
}
