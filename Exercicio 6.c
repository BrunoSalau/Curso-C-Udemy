#include <stdio.h>

int main()
{
    int amarelo,vermelho;
    printf("Quantos cartoes amarelos voce recebeu:");
    scanf("%d",&amarelo);
    if(amarelo == 2){
        printf("O Jogador recebeu %d cartoes amarelos e por isso recebeu um vermelho e foi expulso",amarelo);
    }
    else if(amarelo < 2){
        printf("Jogador nao foi expulso");
    }
    else{
        printf("Nao e possivel o mesmo jogador receber mais de um cartao vermelho na mesma partida");
    }
    return 0;
}
