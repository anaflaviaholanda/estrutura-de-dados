/*2. Fazer um programa para receber 3 valores inteiros do usuário e mostrar a sua média (que pode não ser inteira)*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int nota1, nota2, nota3;
    float media;

    printf("\nDigite um número inteiro: ");
    scanf("%d",&nota1);

    printf("\nDigite um número inteiro: ");
    scanf("%d",&nota2);

    printf("\nDigite um número inteiro: ");
    scanf("%d",&nota3);

    media = (nota1+nota2+nota3)/3;

    printf("\nA média entre %d, %d e %d é = %.2f",nota1,nota2,nota3,media);
    
    return 0;
}
