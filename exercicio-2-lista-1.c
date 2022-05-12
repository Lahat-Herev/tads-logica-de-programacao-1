#include <stdio.h>

int main() 
{
	float valorDolar, cotacaoDia, valorReal;
	valorReal = 0;
	printf("Entre com a quantidade de dolar que voce deseja converter: ");
	scanf("%f", &valorDolar);
	printf("Entre com a cotacao do dia: ");
	scanf("%f", &cotacaoDia);
	valorReal = valorDolar * cotacaoDia;
	printf("A cotacao desse valor em real e: %.2f", valorReal);
	return 0;
}
