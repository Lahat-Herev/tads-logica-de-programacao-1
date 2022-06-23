#include <stdio.h>
int main ()
{
    int quantidadeNumeros = 13;
    int contador = 1;
    int armazenarValorAntigoNumero = 1;
    int numero = 1;
    int sequenciaFibonacci; 
    printf("%d %d ", armazenarValorAntigoNumero, numero);
    do
    {
        sequenciaFibonacci = armazenarValorAntigoNumero + numero;
        printf("%d ", sequenciaFibonacci);
	    numero = armazenarValorAntigoNumero;
        armazenarValorAntigoNumero = sequenciaFibonacci;
        contador++;
    } while (contador <= quantidadeNumeros);
    
}
