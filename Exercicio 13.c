#include <stdio.h>
int main(){
    int numero;
    printf("Voce quer uma contagem ate qual numero:");
    scanf("%d",&numero);
    for(int i=0; i < numero;i++){
        printf("%d\n",i+1);
    }
    return 0;
}
