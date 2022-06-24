#include <stdio.h>
int main ()
{
    int numero;
    int quantidadeIteracoes;
    printf("Digite a quantidade de iteracoes: [i]");
    scanf("%d", &quantidadeIteracoes);
    printf("Digite o numero: [n]");
    scanf("%d", &numero);
    for (int i = 0; i <= quantidadeIteracoes; i++)
    {
        printf("%d * %d e: %d\n", i, numero, i * numero);
    }
}