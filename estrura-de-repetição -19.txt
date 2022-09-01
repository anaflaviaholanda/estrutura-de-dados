/*19. Fazer um programa para mostrar todos os números perfeitos entre 1 e 100. Número perfeito
é todo número inteiro cuja soma dos seus divisores é igual ao dobro do próprio número.*/

int main()
{
    int num;
    
    printf("insira um número e lhe diremos se ele é perfeito");
    scanf("%d",&num);

    if(num/2+num/2==num+num)
    {
    printf("esse núnmero é perfeito %d",num);
    } else{
        printf("esse número não é perfeito");
    }

return 0;
}