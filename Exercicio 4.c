#include <stdio.h>
int main(){
    int v,e,d,pontos;
    printf("Quantas VITORIAS seu time teve:");
    scanf("%d",&v);
    printf("Quantos EMPATES seu time teve");
    scanf("%d",&e);
    printf("Quantas DERROTAS seu time teve");
    scanf("%d",&d);
    pontos = (v * 3) + e;
    printf("Seu time teve uma somatoria de %d Pontos na temporada\n",pontos);
    return 0;
}
