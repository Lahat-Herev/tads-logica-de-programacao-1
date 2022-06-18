#include <ctype.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    int contador = 0;
    int numeroMaximoPessoas = 3;
    int idade;
    int maiorIdade = 0; 
    int menorIdade = idade; 
    int quantidadeHomens = 0; 
    int quantidadeMulheres = 0;
    int somaIdadeMulheres = 0;
    double mediaIdadeMulheres = 0.;
    char sexo;
    do
    {
        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        printf("Digite o seu sexo: ");
        scanf(" %c", &sexo);
        sexo = toupper(sexo);
        switch (sexo)
        {
        case 'F':
            quantidadeMulheres++;
            somaIdadeMulheres += idade;
            break;
        
        default:
            quantidadeHomens++;
            break;
        }

        menorIdade = (idade < menorIdade ? idade : menorIdade);
        maiorIdade = (idade < maiorIdade ? maiorIdade : idade);
        
        contador++;
    } while (contador <= numeroMaximoPessoas);
    mediaIdadeMulheres = somaIdadeMulheres / quantidadeMulheres;
    printf("A quantidade de homens e: %d \n", quantidadeHomens);
    printf("A quantidade de mulheres e: %d \n", quantidadeMulheres);
    printf("A maior idade e: %d \nA menor idade e: %d \n", maiorIdade, menorIdade);
    printf("A media de idade das mulheres e: %.2f", mediaIdadeMulheres);
}