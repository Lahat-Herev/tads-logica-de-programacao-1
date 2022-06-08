#include <stdio.h>
#include <ctype.h>
int main () 
{
    char categoria;
    printf("Digite a sua categoria de carteira: \n");
    scanf(" %c", &categoria);
    categoria = toupper(categoria);
    switch (categoria)
    {
    case 'A':
        printf("Categoria A: Moto \n");
        break;

    case 'B':
        printf("Categoria B: Carro \n");
        break;
    
    case 'C':
        printf("Categoria C: Caminhao \n");
        break;
    
    case 'D':
        printf("Categoria A: Onibus \n");
        break;

    case 'E':
        printf("Categoria E: Carreta \n");
        break;
    
    default:
        printf("A categoria %c nao existe. ", categoria);
        break;
    }
}