#include <stdio.h>
int main ()
{
    int mes, ano, bissexto; 
    printf("Digite o numero equivalente ao mes do ano: \n");
    scanf(" %c", &mes);
    switch (mes)
    {
    case 1: 
        printf("Janeiro tem 31 dias.");
        break;

    case 2: 
        printf("Digiteo ano: \n");
        printf("%d", ano);
        bissexto = ano % 4;
        switch (bissexto)
        {
        case 0: 
            printf("Ano bissexto. Fevereiro tera 29 dias. ");
            break;
        
        default:
            printf("Fevereiro tem 28 dias. ");
            break;
        }

        break;

    case 3: 
        printf("Marco tem 31 dias. ");
        break;

    case 4: 
        printf("Abril tem 30 dias. ");
        break;

    case 5: 
        printf("");
        break;

    case 6: 
        printf("");
        break;

    case 7: 
        printf("");
        break;

    case 8: 
        printf("");
        break;

    case 9: 
        printf("");
        break;

    case 10: 
        printf("");
        break;

    case 11: 
        printf("");
        break;

    case 12: 
        printf("");
        break;
    
    default:
        printf("O mes %d nao se encaixa em nenhum trimestre do ano. ", mes);
        break;
    }
}