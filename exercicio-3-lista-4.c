#include <stdio.h>
int main()
{
    int numero;
    printf("Informe um numero de 1 a 12: \n");
    scanf("%d", &numero);
    switch (numero)
    {
    case 1: 
    case 2:
    case 3:
        printf("Primeiro trimestre. ");
        break;
    case 4:
    case 5:
    case 6:
        printf("Segundo trimestre. ");
        break;
    case 7: 
    case 8:
    case 9:
        printf("Terceiro trimestre. ");
        break;
    case 10:
    case 11:
    case 12:
        printf("Quarto trimestre. ");
        break;
    
    default:
        printf("O numero %d nao se encaixa em nenhum trimestre do ano. ", numero);
        break;
    }
}