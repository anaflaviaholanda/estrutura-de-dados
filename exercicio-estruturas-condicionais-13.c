/*13.	Escreva um programa que calcule o salário semanal de um trabalhador. As entradas são o número de horas trabalhadas na semana e o valor da hora. Até 40 h/semana não se acrescenta nenhum adicional. Acima de 40h e até 60h há um bônus de 50% para essas horas. Acima de 60h há um bônus de 100% para essas horas.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int horaTrab;
    float valorHora, salario, adicional;

    printf("Informe a quantidade horas trabalhadas: ");
    scanf("%d",&horaTrab);

    printf("Informe o valor da hora trabalhada: ");
    scanf("%f",&valorHora);

    if(horaTrab<=40){
        salario=horaTrab*valorHora;
        printf("O Salário final será de %.2f reais",salario);
    }else if(horaTrab>40&&horaTrab<=60){
        salario=(horaTrab*valorHora)*1.5;
        printf("O Salário final será de %.2f reais",salario);
    }else{
        salario=(horaTrab*valorHora)*2;
        printf("O Salário final será de %.2f reais",salario);
    }

    return 0;
}
