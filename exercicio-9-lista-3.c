#include <stdio.h>
#include <math.h>
int main () {
    int numero, raiz, quadrado;
    printf("Digite o numero: \n");
    scanf("%d", &numero);
    if (numero < 0)
    {
        quadrado = pow(numero, 2);
        printf("O numero e: %d e o seu quadrado e: %d", numero, quadrado);
    }
    if (numero > 0)
    {
        raiz = sqrt(numero);
        printf("O numero e: %d e a sua raiz e: %d", numero, raiz);
    }
}