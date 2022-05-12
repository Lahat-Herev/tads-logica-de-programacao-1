#include <stdio.h>
int main()
{
	float medidaComprimento, medidaLargura, precoMetroQuadrado, custoTotal, areaSala;
	printf("Digite a medida de comprimento em metros: ");
	scanf("%f", &medidaComprimento);
	printf("Digite a medida de largura em metros: ");
	scanf("%f", &medidaLargura);
	areaSala = medidaComprimento * medidaLargura;
	printf("A area da sala em metros quadrados e: %.2f", areaSala);
	printf("\n Entre com o preço do metro quadrado: ");
	scanf("%f", &precoMetroQuadrado);
	custoTotal = areaSala * precoMetroQuadrado;
	printf("O custo total e: %.2f", custoTotal);
	return 0;
}
