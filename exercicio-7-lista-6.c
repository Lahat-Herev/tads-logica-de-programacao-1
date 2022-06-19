#include <ctype.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char resposta;
    int quantidadeTorcedoresAtletico = 0, quantidadeTorcedoresCuritiba = 0, quantidadeTorcedoresFoz = 0;
    do
    {
        printf("Digite a sua resposta: " 
        "[A - Atletico] "
        "[C - Curitiba] "
        "[F - Foz]");
        scanf(" %c", &resposta);
        resposta = tolower(resposta);
        switch (resposta)
        {
        case 'a':
            quantidadeTorcedoresAtletico++;
            break;

        case 'c':
            quantidadeTorcedoresCuritiba++;
            break;

        case 'f':
            quantidadeTorcedoresFoz++;
            break;
        
        default:
            break;
        }
    } while (resposta != 's');
    printf("A quantidade de torcedores do Atletico e: %d", quantidadeTorcedoresAtletico);
    printf("\nA quantidade de torcedores do Curitiba e: %d", quantidadeTorcedoresCuritiba);
    printf("\nA quantidade de torcedores do Foz e: %d", quantidadeTorcedoresFoz);
    
    return 0;
}