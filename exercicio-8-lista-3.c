#include <stdio.h>
#include <math.h>
#include <ctype.h>
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
    imc = peso / (pow(altura, 2));
    if (sexo == 'M')
    {
        if (imc < 20)
        {
            printf("Seu imc e de %.2f e voce esta abaixo do peso.", imc);
        }
        if (imc >= 20 && imc <= 24.9)
        {
            printf("Seu imc e de %.2f e voce esta com o peso normal.", imc);
        }
        if (imc >= 25 && imc <= 29.9)
        {
            printf("Seu imc e de %.2f e voce esta com obesidade leve.", imc);
        }
        if (imc >= 30 && imc <= 39.9)
        {
            printf("Seu imc e de %.2f e voce esta com obesidade moderada.", imc);
        }
        if (imc >= 40)
        {
            printf("Seu imc e de %.2f e voce esta com obesidade morbida.", imc);
        }
    }
    else if (sexo == 'F')
    {
        if (imc < 19)
        {
            printf("Seu imc e de %.2f e voce esta abaixo do peso.", imc);
        }
        if (imc >= 19 && imc <= 23.9)
        {
            printf("Seu imc e de %.2f e voce esta com o peso normal.", imc);
        }
        if (imc >= 24 && imc <= 28.9)
        {
            printf("Seu imc e de %.2f e voce esta com obesidade leve.", imc);
        }
        if (imc >= 29 && imc <= 38.9)
        {
            printf("Seu imc e de %.2f e voce esta com obesidade moderada.", imc);
        }
        if (imc >= 39)
        {
            printf("Seu imc e de %.2f e voce esta com obesidade morbida.", imc);
        }
    } else
        printf("Digite uma letra valida. ");
    return 0;
}
