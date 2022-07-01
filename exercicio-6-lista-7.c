#include <stdio.h>
#define numeroDeAlunos 3

int main ()
{
    char codigoAluno[15];
    double nota;
    double mediaConceitoA;
    double mediaConceitoB;
    double mediaConceitoC;
    double mediaConceitoD;
    double mediaConceitoE;
    double somaConceitoA = 0;
    double somaConceitoB = 0;
    double somaConceitoC = 0;
    double somaConceitoD = 0;
    double somaConceitoE = 0;
    int contador;
    int quantidadeConceitoA = 0;
    int quantidadeConceitoB = 0;
    int quantidadeConceitoC = 0;
    int quantidadeConceitoD = 0;
    int quantidadeConceitoE = 0;

    for (contador = 0; contador <= numeroDeAlunos; contador++)
    {
        printf("Digite o codigo do aluno %d: ", contador+1);
        scanf(" %s", codigoAluno);
        printf("Digite a nota do aluno: ");
        scanf("%lf", &nota);
        if (nota >= 0.0 && nota <= 2.9)
        {
            quantidadeConceitoE++;
            somaConceitoE += nota;
        }
        if (nota >= 3.0 && nota <= 4.9)
        {
            quantidadeConceitoD++;
            somaConceitoD += nota;
        }
        if (nota >= 5.0 && nota <= 6.9)
        {
            quantidadeConceitoC++;
            somaConceitoC += nota;
        }
        if (nota >= 7.0 && nota <= 8.9)
        {
            quantidadeConceitoB++;
            somaConceitoB += nota;
        }
        if (nota >= 9.0 && nota <= 10.0)
        {
            quantidadeConceitoA++;
            somaConceitoA += nota;
        } 
    }
    mediaConceitoE = (double) somaConceitoE/quantidadeConceitoE;
    mediaConceitoD = (double) somaConceitoD/quantidadeConceitoD;
    mediaConceitoC = (double) somaConceitoC/quantidadeConceitoC;
    mediaConceitoB = (double) somaConceitoB/quantidadeConceitoB;
    mediaConceitoA = (double) somaConceitoA/quantidadeConceitoA;

    if (mediaConceitoE > 0.0) 
        printf("\nA quantidade de alunos com conceito E e: %d. A media das notas desses alunos e: %.2f.\n", quantidadeConceitoE, mediaConceitoE);
    if (mediaConceitoE != mediaConceitoE)
        printf("\nNao existem alunos com a media E. ");
    
    if (mediaConceitoD > 0.0) 
        printf("\nA quantidade de alunos com conceito D e: %d. A media das notas desses alunos e: %.2f.\n", quantidadeConceitoD, mediaConceitoD);
    if (mediaConceitoD != mediaConceitoD)
        printf("\nNao existem alunos com a media D. ");

    if (mediaConceitoC > 0.0) 
        printf("\nA quantidade de alunos com conceito C e: %d. A media das notas desses alunos e: %.2f.\n", quantidadeConceitoC, mediaConceitoC);
    if (mediaConceitoC != mediaConceitoC)
        printf("\nNao existem alunos com a media C. ");

    if (mediaConceitoB > 0.0) 
        printf("\nA quantidade de alunos com conceito B e: %d. A media das notas desses alunos e: %.2f.\n", quantidadeConceitoB, mediaConceitoB);
    if (mediaConceitoB != mediaConceitoB)
        printf("\nNao existem alunos com a media B. ");

    if (mediaConceitoA > 0.0) 
        printf("\nA quantidade de alunos com conceito A e: %d. A media das notas desses alunos e: %.2f.\n", quantidadeConceitoA, mediaConceitoA);
    if (mediaConceitoA != mediaConceitoA)
        printf("\nNao existem alunos com a media A. ");
}