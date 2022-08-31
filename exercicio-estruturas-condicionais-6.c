/* fazer um programa que recebe 3 valores não inteiros do usuário e mostra o maior deles, o menor deles e o valor intermediário.*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float num1,num2,num3,max,min,meio;

    printf("Escreva um número: ");
    scanf("%f",&num1);
    printf("\nEscreva um número: ");
    scanf("%f",&num2);
    printf("\nEscreva um número: ");
    scanf("%f",&num3);

    if(num1>num2&&num2<num3){
        max=num1;
        min=num2;
        meio=num3;
        printf("\nO maior número é:%.2f, o do meio é:%.2f e o menor é:%.2f",max,meio,min);
    }else if((num2>num1)&&(num2>num3)&&(num1>num3)){
        meio=num1;
        max=num2;
        min=num3;
        printf("\nO maior número é:%.2f, o do meio é:%.2f e o menor é:%.2f",max,meio,min);
    }else if(num3>num1&&num2>num1){
        min=num1;
        meio=num2;
        max=num3;
        printf("\nO maior número é:%.2f, o do meio é:%.2f e o menor é:%.2f",max,meio,min);
    }else if(num1>num2&&num3<num2){
        max=num1;
        meio=num2;
        min=num3;
        printf("\nO maior número é:%.2f, o do meio é:%.2f e o menor é:%.2f",max,meio,min);
    }else if(num2>num3&&num1<num3){
        max=num2;
        meio=num3;
        min=num1;
        printf("\nO maior número é:%.2f, o do meio é:%.2f e o menor é:%.2f",max,meio,min);
    }else{
        meio=num1;
        max=num1;
        min=num2;
        printf("\nO maior número é:%.2f, o do meio é:%.2f e o menor é:%.2f",max,meio,min);
    }

    return 0;
}
