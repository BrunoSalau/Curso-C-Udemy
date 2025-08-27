#include <stdio.h>

int main()
{
    int idade;
    printf("Qual a idade do jogador:");
    scanf("%d",&idade);
    if(idade > 20){
        printf("\n\nO Jogador deve jogar na categoria profissional\n\n");
    }
    else{
        printf("\n\nO jogador pode jogar no Sub-20\n\n");
    }
    return 0;
}
