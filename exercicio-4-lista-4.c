#include <stdio.h>
int main ()
{
    int mes, ano; 
    printf("Digite o numero equivalente ao mes do ano: \n");
    scanf("%d", &mes);
    switch (mes)
    {
    case 2: 
        printf("Digite o ano: \n");
        scanf("%d", &ano);
        if (ano % 4 == 0 && ano % 100 != 0)
			printf("Ano bissexto. Fevereiro tera 29 dias. ");	
		else if (ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0)
			printf("Ano bissexto. Fevereiro tera 29 dias. u.u");
		else 
			printf("Fevereiro tem 28 dias. ");
		
        break;
	
	case 1: 
    case 3: 
    case 5:
    case 7:
    case 8:  
    case 10: 
        printf("Tem 31 dias. ");
        break;

    case 4:
    case 6: 
    case 9: 
    case 11: 
    case 12: 
        printf("Tem 30 dias. ");
    
    default:
        printf("O mes %d nao se encaixa em nenhum trimestre do ano. ", mes);
        break;
    }
}
