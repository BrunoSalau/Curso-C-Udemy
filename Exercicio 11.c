#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pedido;
    printf("Seja bem vindo ao restaurante do Bom!!\nEm nosso cardapio temos:\n\n");
    printf("1.Hamburguer\n\n");
    printf("2.Cachorro-Quente\n\n");
    printf("3.Pizza\n\n");
    printf("4.Sair\n\n");
    printf("Por favor digite o numero do seu pedido:");
    scanf("%d",&pedido);
    switch(pedido){
        case 1:printf("\n\nAqui esta o seu Hamburguer, Bom apetite\n\n");
        break;
        case 2:printf("\n\nAqui esta o seu Cachorro-Quente, Bom apetite\n\n");
        break;
        case 3:printf("\n\nAqui esta o sua Pizza, Bom apetite\n\n");
        break;
        case 4:printf("\n\nPedido Encerrado\n\n");
        break;
        default:printf("\n\nErro no pedido\n\n");
    }
    return 0;
}
