#include <stdio.h>
#include <ctype.h>

void calculoPagamento(float juros, float desconto, float valorTotalCompra, int qtdParcelas) 
{
	float valorFinalCompra, diferenca, valorParcelas;
	if (juros > 0)
	{
		valorFinalCompra = valorTotalCompra + (valorTotalCompra * juros);
		diferenca = valorFinalCompra - valorTotalCompra;
	}
	if (juros == 0)
	{
		valorFinalCompra = valorTotalCompra - (valorTotalCompra * desconto);
		diferenca = valorTotalCompra  - valorFinalCompra;
	}
	valorParcelas = valorFinalCompra / qtdParcelas;
    desconto *= 100;
	juros *= 100;
	if (qtdParcelas == 0)
	{
		return printf("O valor final da compra foi de R$%.2f. \nA diferenca foi de R$%.2f e o desconto foi de [%.2f%]", valorFinalCompra, diferenca, desconto);	
	}
	if (qtdParcelas > 0)
	{
		if (juros == 0)
		{
			return printf("O valor total da compra foi de R$%.2f. \nA diferenca foi de R$%.2f \nO desconto foi de [%.2f%]. \nE dividiu-se em %d parcelas no valor de [R$%.2f%]", valorFinalCompra, diferenca, desconto, qtdParcelas, valorParcelas);	
		}
		
		if (juros > 0)
		{
			return printf("O valor total da compra foi de R$%.2f \nO valor final da compra foi de R$%.2f \nTeve %d parcelas \nO valor de cada parcela foi de R$%.2f \nTeve juros de [%.2f%] e a diferenca foi de R$%.2f", valorTotalCompra, valorFinalCompra, qtdParcelas, valorParcelas, juros, diferenca);
		} 
	}
}

void definicaoPagamento(char opcaoPagamento, float valorTotalCompra)
{
	switch (opcaoPagamento)
	{
		case 'A': 
			calculoPagamento(0, 0.15, valorTotalCompra, 0);
			break;
			
		case 'B': 
			calculoPagamento(0, 0.10, valorTotalCompra, 0);
			break;
			
		case 'C': 
			calculoPagamento(0, 0.05, valorTotalCompra, 3);
			break;

		case 'D':
			calculoPagamento(0, 0, valorTotalCompra, 6);
			break; 

		case 'E':
			calculoPagamento(0.08, 0, valorTotalCompra, 12);
			break;
			
		default: 
			printf("Essa opcao nao existe.");
			break;
	}	
}

int main ()
{
	char opcaoPagamento;
	float valorTotalCompra; 
	printf("Digite o valor total da compra: \n");
	scanf("%f", &valorTotalCompra);
	printf("Para pagamento a vista: [A] \nPara pagamento com cheque pre-datado: [B] \nPara pagamento parcelado em 3 vezes: [C] \nPara pagamento parcelado em 6 vezes: [D] \nPara pagamento parcelado em 12 vezes: [E] \n");
	scanf(" %c", &opcaoPagamento);
	opcaoPagamento = toupper(opcaoPagamento);
	definicaoPagamento(opcaoPagamento, valorTotalCompra);
}
