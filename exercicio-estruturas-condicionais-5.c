/*Fazer um programa para receber valores inteiros X, Y e Z do usuário e determinar se estes valores podem formar os lados de um triângulo. Em caso afirmativo, informar se o triângulo é equilátero, isósceles ou escaleno.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int lado1, lado2, lado3;

    printf("Escreva um número: ");
    scanf("%d",&lado1);

    printf("\nEscreva um número: ");
    scanf("%d",&lado2);

    printf("\nEscreva um número: ");
    scanf("%d",&lado3);

    if(lado1<(lado2+lado3)&&lado2<(lado3+lado1)&&lado3<lado1+lado2){
        if((lado1==lado2)&&(lado1==lado3)){
            printf("Triângulo Equilátero");
        }else if((lado1==lado2)&&(lado1!=lado3)||(lado1==lado3)&&(lado1!=lado2)||(lado2==lado3)&&(lado2!=lado1)){
            printf("Triângulo Isósceles");
        }else if((lado1!=lado2)&&(lado2!=lado3)&&(lado1!=lado3)){
            printf("Triângulo Escaleno");
        }

    }else{
        printf("\n Não é um triângulo");
    }


    return 0;
}
