/*Fazer um programa para ler um número do usuário e determinar se este número é par ou não par.*/
#include <stdio.h>

int main(int argc, char const *argv[]){
    
    int num;

    printf("Escreva um número: ");

    scanf("%d",&num);

    if(num%2==0){
        printf("Número par");
    }else{
        printf("Número ímpar");
    }

    return 0;
}
