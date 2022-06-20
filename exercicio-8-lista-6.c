#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    char sexo;
    int idade;
    int resposta;
    double peso;
    double homemMaisGordo = 0.;
    double homemMaisMagro;
    int homemMaisVelho = 0;

    int mulherMaisNova;
    int mulherMaisVelha = 0;
    double mulherMaisGorda = 0.;
    double mulherMaisMagra;
    int inicioLeitura = 0;
    do
    {
        printf("Digite o seu sexo: ");
        scanf(" %c", &sexo);
        sexo = tolower(sexo);
        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        printf("Digite o seu peso: ");
        scanf("%lf", &peso);
        if (inicioLeitura == 0)
        {
            mulherMaisMagra = peso;
            homemMaisMagro = peso;
            mulherMaisNova = idade;
            inicioLeitura = 1;
        }

        switch (sexo)
        {
        case 'm':
            homemMaisGordo = (peso < homemMaisGordo ? homemMaisGordo : peso);
            homemMaisVelho = (idade < homemMaisVelho ? homemMaisVelho : idade);
            if (peso < homemMaisMagro)
                homemMaisMagro = peso;
            break;
        
        default:
            mulherMaisGorda = (peso < mulherMaisGorda ? mulherMaisGorda : peso);
            if (idade < mulherMaisNova)
                mulherMaisNova = idade;
            if (peso < mulherMaisMagra)
                mulherMaisMagra = peso;
            break;
        }
        
        printf("Deseja continuar? \n");
        resposta = getch();
    } while (resposta == 's');
    if (homemMaisGordo > mulherMaisGorda)
        printf("O mais gordo tem %.2fkgs. ", homemMaisGordo);
    else
        printf("A mais gorda tem %.2fkgs. ", mulherMaisGorda);

    if (homemMaisMagro < mulherMaisMagra)
        printf("\nO mais magro tem %.2fkgs.", homemMaisMagro);
    else
    printf("\nA mais magra tem %.2fkgs.", mulherMaisMagra);
    
    printf("\nO homem mais velho tem %d anos.", homemMaisVelho);
    printf("\nA mulher mais nova tem %d anos.", mulherMaisNova);

    return 0;
}