#include <stdio.h>
int main(){
    double x,y,dife;
    printf("Salario do jogador X:");
    scanf("%lf",&x);
    printf("Salario do jogador Y:");
    scanf("%lf",&y);
    if(x > y){
        dife = x - y;
    }
    else if(x < y){
        dife = y - x;
    }
    else {
        dife = 0;
    }
    printf("A diferenca de salario entre o jogador X e Y eh %.2lf\n\n",dife);
    return 0;
}
