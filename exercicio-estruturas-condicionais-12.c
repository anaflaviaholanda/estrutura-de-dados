/*12.	(Cortesia do Prof. Bogdan Tomoyuki Nassu) Suponha que você está programando um módulo contador de cédulas para caixas eletrônicos. Escreva um programa que informa com quantas cédulas de Real podemos representar um dado valor. Exemplo de resposta: R$ 218
= 2 cédulas de 100, 1 cédula de 10, 1 cédula de 5, 1 cédula de 2 e 1 cédula de 1. Procure minimizar o número de cédulas usadas. Desconsidere valores com centavos, e suponha que a máquina sempre tem disponíveis as cédulas necessárias.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int valor, cem, cinquenta, vinte, dez, cinco, dois, um, qtdCedulas, qtdCedulasCem,qtdCedulasCinquenta, qtdCedulasVinte, qtdCedulasDez, qtdCedulasCinco, qtdCedulasDois, qtdCedulasUm;

    cem=100;
    cinquenta=50;
    vinte=20;
    dez=10;
    cinco=5;
    dois=2;
    um=1;

    printf("Informe o valor que deseja sacar: ");
    scanf("%d",&valor);

    if(valor%100==0){
       qtdCedulasCem=valor/100;
       qtdCedulas = qtdCedulasCem;
       printf("%d cédulas de %dreais",qtdCedulas,cem); 
    }else if (valor%50==0)
    {
        qtdCedulasCem=(valor/100);
        qtdCedulasCinquenta=(valor-(qtdCedulasCem*100))/50;
        printf("%d cédulas de %d reais e %d cédulas de %d reais",qtdCedulasCem, cem, qtdCedulasCinquenta, cinquenta);
    }else if(valor%20==0){
        qtdCedulasCem=(valor/100);
        qtdCedulasCinquenta=(valor-(qtdCedulasCem*100))/50;
        qtdCedulasVinte=(valor-((qtdCedulasCem*100)+(qtdCedulasCinquenta*50)))/20;
        qtdCedulasDez=(valor-((qtdCedulasCem*100)+(qtdCedulasCinquenta*50)+(qtdCedulasVinte*20)))/10;
        printf("%d cédulas de %d reais, %d cédulas de %d reais, %d cédulas de %d reais e %d cédulas de %d reais",qtdCedulasCem, cem, qtdCedulasCinquenta, cinquenta, qtdCedulasVinte, vinte, qtdCedulasDez, dez);
    }else{
        qtdCedulasCem=(valor/100);
        qtdCedulasCinquenta=(valor-(qtdCedulasCem*100))/50;
        qtdCedulasVinte=(valor-((qtdCedulasCem*100)+(qtdCedulasCinquenta*50)))/20;
        qtdCedulasDez=(valor-((qtdCedulasCem*100)+(qtdCedulasCinquenta*50)+(qtdCedulasVinte*20)))/10;
        qtdCedulasCinco=(valor-((qtdCedulasCem*100)+(qtdCedulasCinquenta*50)+(qtdCedulasVinte*20)+(qtdCedulasDez*10)))/5;
        qtdCedulasDois=(valor-((qtdCedulasCem*100)+(qtdCedulasCinquenta*50)+(qtdCedulasVinte*20)+(qtdCedulasDez*10)+(qtdCedulasCinco*5)))/2;
        qtdCedulasUm=(valor-((qtdCedulasCem*100)+(qtdCedulasCinquenta*50)+(qtdCedulasVinte*20)+(qtdCedulasDez*10)+(qtdCedulasCinco*5)+(qtdCedulasDois*2)))/1;
        printf("%d cédulas de %d reais, %d cédulas de %d reais, %d cédulas de %d reais, %d cédulas de %d reais, %d cédulas de %d reais, %d cédulas de %d reais e %d cédulas de %d real",qtdCedulasCem, cem, qtdCedulasCinquenta, cinquenta, qtdCedulasVinte, vinte, qtdCedulasDez, dez, qtdCedulasCinco, cinco, qtdCedulasDois, dois, qtdCedulasUm, um);
    }


    return 0;
}



