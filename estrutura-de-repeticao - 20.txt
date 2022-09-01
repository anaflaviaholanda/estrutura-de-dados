
/*20. Fazer um programa para receber um número inteiro do usuário e determinar se este número
é primo ou não.*/

#include<stdio.h>
#include<stdlib.h>

int main()

        int numero;


        printf("Digite o numero:");
        scanf("%d", &numero);

        if((numero % numero == 0)&&((numero/1) == numero)){
            printf("O numero e primo");
        }
        else{
            printf("O numero nao e primo");
        }