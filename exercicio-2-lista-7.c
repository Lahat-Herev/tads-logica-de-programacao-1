#include <stdio.h>

int main()
{
    int primeiraEntrada = 0;
    int quantidadeValoresReais = 3;
    int quantidadeValoresMaioresQueDeterminadoValor = 0;
    double media;
    double numero;
    double somaValoresMaioresQueDeterminadoValor = 0; 
    double valorMaximo = 0.;
    double valorMinimo = 0.;
    double valorEstabelecido = 5.9;

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
    media = somaValoresMaioresQueDeterminadoValor / quantidadeValoresMaioresQueDeterminadoValor;
    if (media > 0.0) 
        printf("\nA media de valores maiores que %.2f e: %.2f", valorEstabelecido, media);
    if (media <= 0.0)
        printf("Nao foi digitado numero maior do que 5.9");
    printf("\nO valor maximo real e: %.2f\nO valor minimo real e: %.2f", valorMaximo, valorMinimo);
}