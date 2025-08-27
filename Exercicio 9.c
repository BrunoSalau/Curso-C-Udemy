#include <stdio.h>

int main()
{
    int gols,idade;
    printf("Quantos anos o jogador tem:");
    scanf("%d",&idade);
    printf("\nQuantos gols o Jogador fez na temporada:");
    scanf("%d",&gols);
    if(idade <= 20 && gols > 10){
        printf("\nJovem talento promissor!\n");
    }
    else if(idade <= 20 && gols <= 10){
        printf("\nJovem em desenvolvimento.\n");
    }
    else if(idade > 20 && gols > 15){
        printf("\nJogador experiente em grande fase!\n");
    }
    else if(idade > 20 && gols <= 15){
        printf("\nEstevão!!!\n");
    }
    return 0;
}
