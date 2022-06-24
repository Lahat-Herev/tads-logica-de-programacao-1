#include <stdio.h>

int main()
{
    double valorMaximo = 0.;
    double valorMinimo = 0.;
    int quantidadeValoresMaioresQueDeterminadoValor = 0;
    double numero;
    int quantidadeValoresReais = 3;
    int primeiraEntrada = 0;
    double valorEstabelecido = 5.9;
    double somaValoresMaioresQueDeterminadoValor; 

    for (int contador = 1; contador <= quantidadeValoresReais; contador++)
    {
        printf("Digite o %do numero: ", contador);
        scanf("%lf", &numero);
        if (primeiraEntrada == 0)
        {
            valorMaximo = numero;
            valorMinimo = numero;
            primeiraEntrada = 1;
        }

        if (numero > valorMaximo)
            valorMaximo = numero;
        if (numero < valorMinimo)
            valorMinimo = numero;

        if (numero > valorEstabelecido)
        {
            quantidadeValoresMaioresQueDeterminadoValor++;
            somaValoresMaioresQueDeterminadoValor += numero;
        }
    }
    printf("\nA media de valores maiores que %.2f e: %.2f", valorEstabelecido, somaValoresMaioresQueDeterminadoValor / quantidadeValoresMaioresQueDeterminadoValor);
    printf("\nO valor maximo real e: %.2f\nO valor minimo real e: %.2f", valorMaximo, valorMinimo);
}