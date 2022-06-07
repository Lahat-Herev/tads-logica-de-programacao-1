#include <stdio.h>
#include <math.h>
#include <ctype.h>

int calculoIMC(double peso, double altura)
{
    double imc = peso / (pow(altura, 2));
    return (imc);
}

int definicaoPorPeso(char sexo, double imc){
    switch (sexo)
    {
    case 'M':
        if (imc < 20)
        {
            return printf("Seu imc e de %.2f e voce esta abaixo do peso.", imc);
        }
        if (imc >= 20 && imc <= 24.9)
        {
            return printf("Seu imc e de %.2f e voce esta com o peso normal.", imc);
        }
        if (imc >= 25 && imc <= 29.9)
        {
            return printf("Seu imc e de %.2f e voce esta com obesidade leve.", imc);
        }
        if (imc >= 30 && imc <= 39.9)
        {
            return printf("Seu imc e de %.2f e voce esta com obesidade moderada.", imc);
        }
        if (imc >= 40)
        {
            return printf("Seu imc e de %.2f e voce esta com obesidade morbida.", imc);
        }
        break;

    case 'F':
        if (imc < 19)
        {
            return printf("Seu imc e de %.2f e voce esta abaixo do peso.", imc);
        }
        if (imc >= 19 && imc <= 23.9)
        {
            return printf("Seu imc e de %.2f e voce esta com o peso normal.", imc);
        }
        if (imc >= 24 && imc <= 28.9)
        {
            return printf("Seu imc e de %.2f e voce esta com obesidade leve.", imc);
        }
        if (imc >= 29 && imc <= 38.9)
        {
            return printf("Seu imc e de %.2f e voce esta com obesidade moderada.", imc);
        }
        if (imc >= 39)
        {
            return printf("Seu imc e de %.2f e voce esta com obesidade morbida.", imc);
        }
        break;

    default:
        return printf("Digite uma letra valida. ");
        break;
    }
}

int main()
{
    char sexo;
    double imc, peso, altura;
    printf("Qual o seu sexo? (M ou F) \n");
    scanf(" %c", &sexo);
    sexo = toupper(sexo);
    printf("Digite o seu peso: ex.: 60.5 \n");
    scanf("%lf", &peso);
    printf("Digite a sua altura: ex.: 1.60 \n");
    scanf("%lf", &altura);
    
    imc = calculoIMC(peso, altura);
    
    definicaoPorPeso(sexo, imc);
    return 0;
}
