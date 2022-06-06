#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numero, restoCentena;
    printf("Digite o numeral: \n");
	scanf("%d", &numero); 
    restoCentena = numero / 100;
    if (restoCentena % 2 == 0)
    {
        printf("O algarismo das centenas %d e par", restoCentena);
    } else {
        printf("O algarismo das centenas %d e impar \n", restoCentena);
    }  
    return 0;
}
