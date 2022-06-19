#include <ctype.h>
#include <conio.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double notaA, notaB, media;
    int pesoA = 1, pesoB = 2, somaPesos, contador = 1;
    char resposta;
    do
    {
        printf("Entre com a nota A: ");
        scanf("%lf", &notaA);
        printf("Entre com a nota B: ");
        scanf("%lf", &notaB);
        somaPesos = pesoA + pesoB;
        media = ((notaA * pesoA) + (notaB * pesoB)) / somaPesos;
        printf("Media do aluno %d: %.1f \n", contador, media);
        
        printf("Continuar? [s] [n] \n");
        scanf(" %c", &resposta);
        contador++;
    } while (resposta == 's');
    
}