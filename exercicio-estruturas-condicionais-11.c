/*11.	Escreva um programa para receber do usuário um mês (de 1 a 12) e um ano (de 0 D.C. em diante) e mostrar o número de dias daquele mês daquele ano. Utilizar switch e levar em consideração anos bissextos para o cálculo.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int mes,ano,jan,fevbi,fev,mar,abril,maio,jun,jul,ago,set,out,nov,dez,anobi;

    printf("Escreva um mês: ");
    scanf("%d",&mes);
    printf("Escreva um ano: ");
    scanf("%d",&ano);

    jan=31;
    fev=28;
    fevbi=29;
    mar=31;
    abril=30;
    maio=31;
    jun=30;
    jul=31;
    ago=31;
    set=30;
    out=31;
    nov=30;
    dez=31;
    
    if((ano%400==0)||(ano%100==0&&ano%400==0)){
        ano=anobi;
    }

    switch (mes)
    {
    case 1:
        mes=jan;
        printf("O mês de Janeiro em %d tem %d dias",ano,mes);
        break;
    case 2:
        if(anobi){
            mes=fevbi;
            printf("\nO mês de fevereiro em %d tem %d dias",ano,mes);
        }else{
            mes=fev;
            printf("\nO mês de fevereiro em %d tem %d dias",ano,mes);
        }
        break;
    case 3:
        mes=mar;
        printf("\nO mês de março em %d tem %d dias",ano,mes);
        break;
    case 4:
        mes=abril;
        printf("\nO mês de março em %d tem %d dias",ano,mes);
        break;
    case 5:
        mes=maio;
        printf("\nO mês de março em %d tem %d dias",ano,mes);
        break;
    case 6:
        mes=jun;
        printf("\nO mês de março em %d tem %d dias",ano,mes);
        break;
    case 7:
        mes=jul;
        printf("\nO mês de março em %d tem %d dias",ano,mes);
        break;
    case 8:
        mes=ago;
        printf("\nO mês de março em %d tem %d dias",ano,mes);
        break;
    case 9:
        mes=set;
        printf("\nO mês de março em %d tem %d dias",ano,mes);
        break;
    case 10:
        mes=out;
        printf("\nO mês de março em %d tem %d dias",ano,mes);
        break;
    case 11:
        mes=nov;
        printf("\nO mês de março em %d tem %d dias",ano,mes);
        break;
    case 12:
        mes=dez;
        printf("\nO mês de março em %d tem %d dias",ano,mes);
        break;
    default:
        printf("inválido");
        break;
    }

    return 0;
}
