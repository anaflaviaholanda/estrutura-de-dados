/*7.	Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois números reais. O programa deve retornar o resultado da operação recebida sobre estes dois números.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char operador;
    float num1, num2, resultado;
    printf("Escreva o primeiro número: ");
    scanf("%f",&num1);

    printf("\n\nEscreva o segundo número: ");
    scanf("%f",&num2);

    printf("\n\nEscreva o Operador: ");
    scanf("%c",&operador);

    switch (operador)
    {
    case '+':
        resultado=num1+num2;
        printf("\n\nA soma de %.2f e %.2f é = %.2f",num1,num2,resultado);
        break;
    case '-':
        resultado=num1-num2;
        printf("\n\nA subtração de %.2f e %.2f é = %.2f",num1,num2,resultado);
    case '*':
        resultado=num1*num2;
        printf("\n\nA multiplicação de %.2f e %.2f é = %.2f",num1,num2,resultado);
    case '/':
        resultado=num1/num2;
        printf("\n\nA divisão de %.2f e %.2f é = %.2f",num1,num2,resultado);
    default:
        printf("\n\n Opção inválida");
        break;
    }

    return 0;
}
