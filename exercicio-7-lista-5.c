#include <stdio.h>
int main()
{
    int razao, termoInicialPA, quantidadeTermos, contador = 0;
    printf("Digite a razao, a quantidade de termos da PA e o termoInicial: \n");
    scanf("%d %d %d", &razao, &quantidadeTermos, &termoInicialPA);
    while (contador < quantidadeTermos)
    {
        printf("%d \n", termoInicialPA);
        termoInicialPA += razao;
        contador++;
    }
    
    return 0;
}
