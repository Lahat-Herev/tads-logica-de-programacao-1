#include <stdio.h>
#include <ctype.h>

int calculoPagamento(float desconto, float valorTotalCompra, int qtdParcelas) 
{
	float valorFinalCompra, juros, diferenca, valorParcelas;
	valorFinalCompra = valorTotalCompra - (valorTotalCompra * desconto);
	diferenca = valorTotalCompra - valorFinalCompra;
	valorParcelas = valorFinalCompra / qtdParcelas;
}

int definicaoPagamento(char opcaoPagamento, float valorTotalCompra)
{
	switch (opcaoPagamento)
	{
		case 'A': 
			calculoPagamento(0.15, valorTotalCompra, 0);
			printf("O valor total da compra foi de R$%.2f \nO valor final da compra foi de R$%.2f \nA diferenca foi de R$%.2f reais e houve o desconto de [15%]. ");
			break;
			
		case 'B': 
			printf("O valor total da compra foi de R$%.2f \nO valor final da compra foi de R$%.2f \nA diferenca foi de R$%.2f reais e houve o desconto de [10%]. ");
			break;
			
		case 'C': 
			printf("O valor total da compra foi de R$%.2f \nO valor final da compra foi de R$%.2f \nA diferença foi de R$%.2f reais e houve o desconto de [5%]. \n Teve %d parcelas \n e o valor de cada parcela foi de R$%.2f");
			break;

		case 'D':
			printf("O valor total da compra foi de R$%.2f \n O valor final da compra foi de R$%.2f \n Teve %d parcelas \n e o valor de cada parcela foi de %f reais");
			break; 

		case 'E':
			printf("O valor total da compra foi de R$%.2f \n O valor final da compra foi de R$%.2f \n Teve %d parcelas \n O valor de cada parcela foi de R$%.2f \n Teve juros de [8%] e a diferenca foi de R$%.2f");
			break;
			
		default: 
			printf("Essa opcao nao existe.");
			break;
	}	
}

int main ()
{
	char opcaoPagamento;
	int qtdParcelas;
	float valorTotalCompra, valorFinalCompra, valorParcelas, desconto, juros, diferenca; 
	printf("Digite o valor total da compra: \n");
	scanf("%f", &valorTotalCompra);
	printf("Para pagamento a vista: [A] \n");
	printf("Para pagamento com cheque pre-datado: [B] \n");
	printf("Para pagamento parcelado em 3 vezes: [C] \n");
	printf("Para pagamento parcelado em 6 vezes: [D] \n");
	printf("Para pagamento parcelado em 12 vezes: [E] \n");
	scanf(" %c", &opcaoPagamento);
	opcaoPagamento = toupper(opcaoPagamento);
	definicaoPagamento(opcaoPagamento);
}
