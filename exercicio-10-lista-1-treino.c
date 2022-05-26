#include <stdio.h>
int main()
{
	int distanciaKM;
	float combustivelGasto, total;
	printf("Digite a distancia total percorrida: \n");
	scanf("%d", &distanciaKM);
	printf("Digite o  total de combustível gasto (em litros): \n");
	scanf("%f", &combustivelGasto);
	total = (float) distanciaKM / combustivelGasto;
	printf("%.3f km/l \n ", total);
	return 0;
}
