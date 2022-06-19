#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int numero;
    int menorNumero = 0;
    int maiorNumero = 10;
    do
    {        
        printf("Digite o numero: ");
        scanf("%d", &numero);
        if (numero >= menorNumero && numero <= maiorNumero)
            printf("O numero e: %d \n", numero);
        else
            printf("\nNumero fora do intervalo!");
    } while (menorNumero <= numero && numero <= maiorNumero);
    
}