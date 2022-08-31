/*10.	(Cortesia do Prof. Bogdan Tomoyuki Nassu) Escreva um programa que receba a velocidade máxima em uma avenida e a velocidade com que um motorista estava dirigindo nela. Calcule a multa que o motorista vai receber, considerando que são pagos R$ 5,00 por cada km/h que estiver acima da velocidade permitida (considere apenas números inteiros). Se a velocidade do motorista estiver dentro do limite, o programa deve informar que não há multa.*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int velMaxima, velMotorista, taxaMulta, multa, excedente;
    printf("Escreva a Velocidade da Via: ");
    scanf("%d",&velMaxima);

    printf("Escreva a sua Velocidade: ");
    scanf("%d",&velMotorista);

    if(velMotorista>velMaxima){
        excedente= velMotorista-velMaxima;
        multa= excedente*5;
        printf("Velocidade excedente %dkm, total a pagar de multa:%dreais",excedente,multa);
    }else{
        printf("Velocidade %d dentro do permitido, não há multas!",velMotorista);
    }
    
    return 0;
}
