#include <stdio.h>
#include <math.h>

int main()
{
    double mediaInteirosPositivos;
    double mediaPares;
    double mediaImpares;
    double mediaImparesDivisiveisPor3e4;
    int quantidadeInteirosPositivos = 0;
    int quantidadePares = 0;
    int quantidadeImpares = 0;
    int quantidadeImparesDivisiveisPelosNumeros = 0;
    int somaPares = 0;
    int somaInteirosPositivos = 0;
    int somaImpares = 0;
    int somaQuantidadeImparesDivisiveisPelosNumeros = 0;
    int valorInicial;
    int valorFinal;

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

        if ((contador % 3 == 0) && (contador % 4 == 0) && (contador % 2 != 0))
        {
            quantidadeImparesDivisiveisPelosNumeros++;
            somaQuantidadeImparesDivisiveisPelosNumeros += contador;
        }
    }
    
    mediaInteirosPositivos = (double) somaInteirosPositivos/quantidadeInteirosPositivos;
    mediaPares = (double) somaPares/quantidadePares;
    mediaImpares = (double) somaImpares/quantidadeImpares;
    mediaImparesDivisiveisPor3e4 = (double) somaQuantidadeImparesDivisiveisPelosNumeros/quantidadeImparesDivisiveisPelosNumeros;

    if (mediaInteirosPositivos > 0.0) 
        printf("\nA quantidade de numeros inteiros e positivos e %d e a media dos mesmos e: %2.f", quantidadeInteirosPositivos, mediaInteirosPositivos);
    if (mediaInteirosPositivos <= 0.0)
        printf("Nao existe(m) inteiro(s) positivo(s).");

    if (mediaPares > 0.0) 
        printf("\nA quantidade de numeros pares e %d e a media dos mesmos e: %.2f", quantidadePares, mediaPares);
    if (mediaPares <= 0.0)
        printf("Nao existe(m) numero(s) par(es).");
    
    if (mediaImpares > 0.0) 
        printf("\nA quantidade de numeros impares e %d e a media dos mesmos e: %.2f", quantidadeImpares, mediaImpares);
    if (mediaImpares <= 0.0)
        printf("Nao existe(m) numero(s) impar(es).");
    
    if (mediaImparesDivisiveisPor3e4 == mediaImparesDivisiveisPor3e4) 
        printf("\nA quantidade de numeros impares divisiveis por [3] e [4] e: %d, e a media dos mesmos e: %.2f", quantidadeImparesDivisiveisPelosNumeros, mediaImparesDivisiveisPor3e4);
    if (mediaImparesDivisiveisPor3e4 != mediaImparesDivisiveisPor3e4)
        printf("\nNao existe(m) numero(s) impar(es) divisiveis(el) por 3 e por 4.");
}
