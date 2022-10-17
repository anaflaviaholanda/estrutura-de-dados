/*61.	Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
  int vetor[6], i=0;
  for(i=0;i<=6;i++){
    printf("escreva um número:");
    scanf("%d",&vetor[i]);
  }
  for(i=0;i<=6;i++){
    printf("%d",vetor[i]);
  }
  return 0;
}