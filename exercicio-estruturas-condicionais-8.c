/*8.	Fazer um programa que recebe duas notas parciais de um aluno (0 a 100) e informa se ele está aprovado (média maior ou igual a 70), em exame final (média entre 40 e 69) ou reprovado (média menor do que 40). Caso esteja em exame o programa deve pedir a nota do exame (0 a 100) e informar se o aluno está aprovado (média mais nota do exame maior ou igual a 100) ou reprovado (média mais nota do exame menor do que 100).*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int nota1,nota2,media,exame,notaFinal;

    printf("Escreva a primeira nota: ");
    scanf("%d",&nota1);

    printf("Escreva a segunta nota: ");
    scanf("%d",&nota2);

    media=(nota1+nota2)/2;
    notaFinal=media+exame;

    if(media>=70){
        printf("Aprovado");
    }else if(media>=40&&media<=69){
        printf("Média = %d, Realizar exame final",media);
        printf("\n\nEscreva nota do exame final:");
        scanf("%d",&exame);
        if(notaFinal>=100){
            printf("Aprovado");
        }else{
            printf("Reprovado");
        }
    }else if(media<40){
        printf("Reprovado");
    }


    return 0;
}
