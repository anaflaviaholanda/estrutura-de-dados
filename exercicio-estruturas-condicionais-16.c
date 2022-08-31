/*16.	Faça um programa que receba do usuário o número de lados e o tamanho dos lados de um polígono regular e imprima o valor da área do polígono. O programa deve utilizar uma estrutura switch-case para decidir que fórmula de cálculo utilizar, de acordo com o número de lados do polígono. Se o número de lados for diferente de 3, 4 ou 6, o programa deve informar: “não sei calcular a área”. Áreas:

a.	Triângulo: A = L*L*1.73/4
b.	Quadrado: A = L*L
c.	Hexágono: A = 6*L*L*1.73/4;*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int qtdLados;
    float tamLado,area;

    printf("Escreva quantos lados tem o polígono: ");
    scanf("%d",&qtdLados);

    switch (qtdLados)
    {
    case 3:
        printf("informe a medida do lado: ");
        scanf("%f",&tamLado);
        area=(tamLado*tamLado*1.73)/4;
        printf("Área do Triângulo= %.2f",area);
        break;
    case 4:
        printf("informe a medida do lado: ");
        scanf("%f",&tamLado);
        area=tamLado*tamLado;
        printf("Área do Quadrado= %.2f",area);
        break;
    case 6:
        printf("informe a medida do lado: ");
        scanf("%f",&tamLado);
        area=(6*tamLado*tamLado*1.73)/4;
        printf("Área do Hexágono= %.2f",area);
        break;
    default:
        printf("Não sei calcular a área :(");
        break;
    }

    return 0;
}

