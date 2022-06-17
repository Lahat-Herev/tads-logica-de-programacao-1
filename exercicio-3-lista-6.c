#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int contador = 0;
    int numeroMaximoPessoas = 2;
    int idade;
    int maiorIdade = 0; 
    int menorIdade = 0; 
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
        maiorIdade += (idade < maiorIdade ? maiorIdade : idade);
        menorIdade += (idade < menorIdade ? idade: menorIdade); 
        
        contador++;
    } while (contador <= numeroMaximoPessoas);
    printf("A quantidade de homens e: %d \n", quantidadeHomens);
    printf("A quantidade de mulheres e: %d \n", quantidadeMulheres);
    // printf("A maior idade e: \nA menor idade e: \n", &maiorIdade, &menorIdade);
}