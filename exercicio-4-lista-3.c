#include <stdio.h>
int main ()
{
	char estadoCivil;
	printf("Digite seu estado civil, por favor. \n");
	scanf("%c", &estadoCivil);
	if(estadoCivil == 'S' || estadoCivil == 's')
	{
		printf("Você é solteiro(a).");
	}
	else if(estadoCivil == 'C' || estadoCivil == 'c')
	{
		printf("Você é casado(a).");
	}
	else if(estadoCivil == 'D' || estadoCivil == 'd')
	{
		printf("Você é divorciado(a).");
	}
	else if(estadoCivil == 'V' || estadoCivil == 'v')
	{
		printf("Você é viuvo(a). Meus pêsames!");
	}
	else
		printf("Você não atende a nenhuma das condições.");
	
	return 0;		
}
