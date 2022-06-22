#include <stdio.h>
#include <ctype.h>

int main ()
{
    char genero;
    char corDosOlhos;
    char corDosCabelos; 
    int idade;
    int menorIdade; 
    int quantidadeHomens = 0; 
    int quantidadeMulheres = 0; 
    int contador = 0;
    int numeroMaximoPessoas = 2;
    int primeiraEntrada = 0;
    int menorIdadeMasculina = 16;
    int maiorIdadeMasculina = 24;
    int maiorIdadeFeminina = 40;
    do
    {
        printf("Digite o seu genero: [M] ou [F] ");
        scanf(" %c", &genero);
        printf("Digite a cor dos teus olhos: " 
        "[A - Azuis] "
        "[V - Verdes] "
        "[P - Pretos]"
        "[C - Castanhos] ");
        scanf(" %c", &corDosOlhos);
        corDosOlhos = tolower(corDosOlhos);
        printf("Digite a cor dos teus cabelos: " 
        "[L - Louros] "
        "[P - Pretos] "
        "[C - Castanhos] ");
        scanf(" %c", &corDosCabelos);
        corDosCabelos = tolower(corDosCabelos);
        printf("Digite a sua idade: ");
        scanf("%d", &idade);

        if (primeiraEntrada == 0)
        {
            menorIdade = idade;
            primeiraEntrada = 1; 
        }

        switch (genero)
        {
        case 'm':
            if (idade >= menorIdadeMasculina && idade <= maiorIdadeMasculina)
            {
                if (corDosCabelos == 'c' && corDosOlhos == 'a')
                {
                    quantidadeHomens++;
                }
            }
            
            break;
        
        case 'f':
            if (idade <= maiorIdadeFeminina)
            {
                if (corDosOlhos == 'p' && corDosCabelos == 'p')
                {
                    quantidadeMulheres++;
                }
            }
            
            break;

        default:
            break;
        }

        if (idade < menorIdade)
            menorIdade = idade;
        
        contador++;
    } while (contador <= numeroMaximoPessoas);
    printf("A menor idade do grupo e: %d"
    "\nA quantidade de mulheres com menos de 40 anos, com olhos e cabelos pretos e: %d "
    "\nA quantidade de homens com idade entre 16 anos e 24 anos, olhos azuis e cabelos castanhos e: %d", menorIdade, quantidadeMulheres, quantidadeHomens);
}