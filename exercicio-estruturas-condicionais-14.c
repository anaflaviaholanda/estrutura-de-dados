/*14.	(Cortesia do Prof. Bogdan Tomoyuki Nassu) Zeca está organizando um bolão de futebol. Segundo suas regras, os apostadores informam o placar do jogo e ganham 10 pontos se acertarem o vencedor ou se acertarem que foi empate, e ganham mais 5 pontos para o placar de cada time que acertarem. A tabela a seguir dá um exemplo, considerando que o placar real foi 3x2: Escreva um programa que requisita do usuário o placar apostado e depois o placar do jogo e informa quantos pontos o apostador fez. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int gol1, gol2, palpite1, palpite2,ponto;
    char vencedor[40], time1[40], time2[40];

    printf("Informe o nome do primeiro time: ");
    fflush(stdin);
    gets(time1);
    printf("\nInforme o seu palpite do número de gols do primeiro time: ");
    scanf("%d",&palpite1);
    printf("\nInforme o número de gols reais do primeiro time: ");
    scanf("%d",&gol1); 
    printf("\n\nInforme o nome do segundo time: ");
    fflush(stdin);
    gets(time2);
    printf("\nInforme o seu palpite do número de gols do segundo time: ");
    scanf("%d",&palpite2);
    printf("\nInforme o número de gols reais do segundo time: ");
    scanf("%d",&gol2);

    if(gol1>gol2&&palpite1>palpite2){
        if(palpite1==gol1&&palpite2==gol2){
            ponto=15;
            printf("\nAcertou o placar, %s %dX%d %s, marcou %d pontos",time1, gol1, gol2, time2, ponto);
            }else{
                ponto=10;
                printf("\nAcertou o vencedor %s, marcou %d pontos",time1,ponto);
            }
        }else if(gol1<gol2&&palpite1<palpite2){
            if(palpite1==gol1&&palpite2==gol2){
                ponto=15;
                printf("\nAcertou o placar, %s %dX%d %s, marcou %d pontos",time1, gol1, gol2, time2, ponto);
            }else{
                ponto=10;
                printf("\nAcertou o vencedor %s, marcou %d pontos",time2,ponto);
            }
        }else if(gol1==gol2&&palpite1==palpite2){
            if(palpite1==gol1&&palpite2==gol2){
                ponto=15;
                printf("\nAcertou o placar, %s %dX%d %s, marcou %d pontos",time1,gol1,gol2,time2,ponto);
            }else{
                ponto=10;
                printf("\nAcertou o resultado, marcou %d pontos",ponto);
            }
        }else{
            printf("\nErrou o palpite, não pontua.");
        }
}
