#include <stdio.h>
int main(){
    double media,gols,partidas;
    printf("Informe a quantidade de gols feitos em sua carreira:");
    scanf("%lf",&gols);
    printf("Informe quantas partidas voce ja jogou em sua carreira:");
    scanf("%lf",&partidas);
    media = gols / partidas;
    printf("\nVoce tem uma media de %.2lf gols por jogos\n\n",media);
    return 0;
}
