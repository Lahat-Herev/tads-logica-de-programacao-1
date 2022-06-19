#include <ctype.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int idade;
    int totalEspectadores = 0;
    int totalVotosPositivos = 0, totalVotosNegativos = 0; 
    int totalRecomendacoesPositivas = 0, totalRecomendacoesNegativas = 0;
    char gostouOuNao, recomendaOuNao;
    do
    {
        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        printf("Gostou do filme? [S] ou [N]");
        scanf(" %c", &gostouOuNao);
        gostouOuNao = toupper(gostouOuNao);
        printf("Recomendaria o filme? [S] ou [N]");
        scanf(" %c", &recomendaOuNao);
        recomendaOuNao = toupper(recomendaOuNao);
        switch (gostouOuNao)
        {
        case 'S':
            totalVotosPositivos++;
            break;
        
        default:
            totalVotosNegativos++;
            break;
        }      
    
        switch (recomendaOuNao)
        {
        case 'S':
            totalRecomendacoesPositivas++;
            break;
        
        default:
            totalRecomendacoesNegativas++;
            break;
        }
    } while (idade != 0);
    printf("A quantidade de votos positivos e: %d ", totalVotosPositivos);
    printf("\nA quantidade de votos negativos e: %d ", totalVotosNegativos);
    printf("\nA quantidade de recomendacoes positivas e: %d ", totalRecomendacoesPositivas);
    printf("\nA quantidade de recomendacoes negativas e: %d \n", totalRecomendacoesNegativas);
}