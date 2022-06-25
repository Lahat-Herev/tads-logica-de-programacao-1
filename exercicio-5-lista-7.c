#include <stdio.h>

int main()
{
    int valorInicial;
    int valorFinal;
    int quantidadeInteirosPositivos = 0;
    int quantidadePares = 0;
    int quantidadeImpares = 0;
    int quantidadeImparesDivisiveisPelosNumeros = 0;
    int somaPares = 0;
    int somaInteirosPositivos = 0;
    int somaImpares = 0;
    int somaQuantidadeImparesDivisiveisPelosNumeros = 0;

    printf("Digite o valor inicial: ");
    scanf("%d", &valorInicial);
    printf("\nDigite o valor final: ");
    scanf("%d", &valorFinal);

    for (int contador = valorInicial; contador <= valorFinal; contador++)
    {
        if (contador % 2 == 0)
        {
            quantidadePares++;
            somaPares += contador;
        }

        if (contador >= 0)
        {
            quantidadeInteirosPositivos++;
            somaInteirosPositivos += contador;
        }
        
        if (contador % 2 != 0)
        {
            quantidadeImpares++;
            somaImpares += contador;
        }

        if ((contador % 3 == 0) && (contador % 4 == 0) && (contador != 0))
        {
            quantidadeImparesDivisiveisPelosNumeros++;
            somaQuantidadeImparesDivisiveisPelosNumeros += contador;
        }
    }
    printf("\nA quantidade de numeros inteiros e positivos e %d e a media dos mesmos e: %2.f", quantidadeInteirosPositivos, (double) somaInteirosPositivos/quantidadeInteirosPositivos);
    printf("\nA quantidade de numeros pares e %d e a media dos mesmos e: %.2f", quantidadePares, (double) somaPares/quantidadePares);
    printf("\nA quantidade de numeros impares e %d e a media dos mesmos e: %.2f", quantidadeImpares, (double) somaImpares/quantidadeImpares);
    printf("\nA quantidade de numeros impares divisiveis por [3] e [4] e: %d, e a media dos mesmos e: %.2f", quantidadeImparesDivisiveisPelosNumeros, (double) somaQuantidadeImparesDivisiveisPelosNumeros/quantidadeImparesDivisiveisPelosNumeros);
}
