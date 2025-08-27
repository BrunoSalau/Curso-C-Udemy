#include <stdio.h>

int main()
{
    int gols;
    printf("Quantos gols o Jogador fez na temporada:");
    scanf("%d",&gols);
    if(gols > 10){
        printf("\nEsse jogador teve uma Exelente temporada com %d gols\n",gols);
    }
    else if(gols <= 10 && gols >= 5){
        printf("\nEsse jogador teve uma Boa temporada com %d gols\n",gols);
    }
    else{
        printf("\nEsse jogador teve uma Temporada abaixo do esperado com %d gols",gols);
    }
    return 0;
}
