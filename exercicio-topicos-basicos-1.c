#include <stdio.h>

/* 1. Fazer um programa para
receber do usuário um tempo em segundos, correspondente à duração de um evento qualquer (por ex. jogo de futebol)
calcular e mostrar ao usuário o tempo equivalente em horas, minutos e segundos*/

#include <stdio.h>


int main(int argc, char const *argv[])
{
    float segundo, minuto, hora;

    printf("Digite o tempo de duração de um jogo de futebol em sugundos:");
    scanf("%f",&segundo);

    printf("\nA duração de um jogo de futebol em segundos é: %.2f segundos",segundo);

    minuto = segundo/60;

    printf("\nA duração de um jogo de futebol em minutos é: %.2f minutos",minuto);

    hora = minuto/60;

    printf("\nA duração de um jogo de futebol em horas é: %.2f horas",hora);

    return 0;
}
