#include <stdio.h>
#include <ctype.h>
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
	switch (opcaoPagamento)
	{
		case 'A': 
			desconto = 0.15;
			valorFinalCompra = valorTotalCompra - (valorTotalCompra * desconto);
			diferenca = valorFinalCompra - valorTotalCompra;
			printf("O valor total da compra foi de R$%.2f \n O valor final da compra foi de R$%.2f \n A diferença foi de R$ %.2f reais \n e houve o desconto de 15%. ", valorTotalCompra, valorFinalCompra, diferenca, desconto);
			break;
			
		case 'B': 
			desconto = 0.10;
			valorFinalCompra = valorTotalCompra - (valorTotalCompra * desconto);
			printf("O valor total da compra foi de R$%.2f \n O valor final da compra foi de R$%.2f \n A diferença foi de R$ %.2f reais \n e houve o desconto de 10%. ", valorTotalCompra, valorFinalCompra, diferenca, desconto);
			break;
			
		case 'C': 
			qtdParcelas = 3;
			desconto = 0.05;
			valorFinalCompra = valorTotalCompra - (valorTotalCompra * desconto);
			valorParcelas = valorFinalCompra / qtdParcelas;
			printf("O valor total da compra foi de R$%.2f \n O valor final da compra foi de R$%.2f \n A diferença foi de R$ %.2f reais \n houve o desconto de 5%. \n Teve %d parcelas \n e o valor de cada parcela foi de %.f reais", valorTotalCompra, valorFinalCompra, diferenca, desconto qtdParcelas, valorParcelas);
			break;
			
		default: 
			printf("Essa opcao nao existe.");
			break;
	}	
}
