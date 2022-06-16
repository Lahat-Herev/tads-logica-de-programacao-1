#include <stdio.h>
int main ()
{
    int contador = 1, quantidadeNumeros = 15, armazenarValorAntigoNumero = 1, numero = 1, sequenciaFibonacci; 
    do
    {
        sequenciaFibonacci = armazenarValorAntigoNumero + numero;
        printf("%d %d %d \n", armazenarValorAntigoNumero, numero, sequenciaFibonacci);
        armazenarValorAntigoNumero = numero + sequenciaFibonacci;
        numero = armazenarValorAntigoNumero + sequenciaFibonacci;
        contador++;
    } while (contador <= quantidadeNumeros);
    
}