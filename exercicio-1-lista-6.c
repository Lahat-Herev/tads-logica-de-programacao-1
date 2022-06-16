#include <stdio.h>
int main ()
{
    int valorInicialContador, valorFinalContador;
    printf("Digite o valor inicial do contador: \n");
    scanf("%d", &valorInicialContador);
    printf("Digite o valor final do contador: \n");
    scanf("%d", &valorFinalContador);
    do
    {
        printf("%d \n", valorInicialContador);
        valorInicialContador++;
    } while (valorInicialContador <= valorFinalContador);
}