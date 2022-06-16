#include <stdio.h>
int main()
{
    int razao, termoInicialPG, quantidadeTermos, contador = 0;
    printf("Digite a razao, a quantidade de termos da PG e o termoInicial: \n");
    scanf("%d %d %d", &razao, &quantidadeTermos, &termoInicialPG);
    while (contador < quantidadeTermos)
    {
        printf("%d \n", termoInicialPG);
        termoInicialPG *= razao;
        contador++;
    }
    
    return 0;
}
