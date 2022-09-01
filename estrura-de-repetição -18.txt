/*18. Fazer um programa para mostrar os 15 primeiros 
termos da série de Fibonacci.*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=0, b=1, cont=1, aux=0;

    for(cont=1;cont<16;cont++)
    {
    aux= a+b;
    a=b;
    b=aux;
    }
    printf("essa é sua sequência de fibonacci até 15 termos %d", aux);

    return 0; 


    
}
