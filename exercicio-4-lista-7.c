#include <stdio.h>

int main ()
{
    double somaFracao = 0.;
    int numerador = 49;
    int denominador = 25;
    int contadorNumerador;
    int contadorDenominador;
    for (contadorNumerador = 1, contadorDenominador = 1; contadorNumerador <= numerador, contadorDenominador <= denominador; contadorNumerador+=2, contadorDenominador++)
    {
        printf("%d / %d\n", contadorNumerador, contadorDenominador);
        somaFracao += (double) contadorNumerador/contadorDenominador; 
    }
    printf("A = %f", somaFracao);
}