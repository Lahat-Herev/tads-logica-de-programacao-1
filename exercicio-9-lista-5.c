#include <stdio.h>
int main()
{
    int resultado, numeros = 10, numero = 6, contador = 0;
    while (contador <= numeros)
    {
        resultado = numero * contador;
        printf("%d * %d e: %d \n", numero, contador, resultado);
        contador++;
    }
    
    return 0;
}