#include <stdio.h>
int main(){
    int tempo,horas,minutos;
    printf("Informe quantos tempo voce teve de jogo em minutos:");
    scanf("%d",&tempo);
    horas = tempo / 60;
    minutos = tempo % 60;
    printf("Voce jogou por %d horas e %d minutos\n",horas,minutos);
    return 0;
}
