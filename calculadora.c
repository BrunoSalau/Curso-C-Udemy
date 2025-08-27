#include <stdio.h>
int main(){
    char operador;
    double a,b;
    printf("Digite qual opecao voce quer fazer:(+,-,*,/)");
    scanf("%c",&operador);
    printf("Digite os dois valores que voce quer usar:");
    scanf("%lf %lf",&a,&b);
    switch(operador){
        case '+':
            printf("%2.lf %c %2.lf = %2.lf",a,operador,b,(a + b));break;
        case '-':
            printf("%2.lf %c %2.lf = %2.lf",a,operador,b,(a - b));break;
        case '*':
            printf("%2.lf %c %2.lf = %2.lf",a,operador,b,(a * b));break;
        case '/':
            if(b != 0){printf("%2.lf %c %2.lf = %2.lf",a,operador,b,(a / b));}
            else{printf("Conta invalida");}
        break;
        default:
            printf("Conta invalida");}
    return 0;
}
