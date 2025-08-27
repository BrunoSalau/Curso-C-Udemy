#include <stdio.h>
#include <stdlib.h>

int main()
{
    double freq, nota;
    int opc;
    printf("Seja bem vindo ao Sistema escolar!!");
    printf("\n\n1. Verificar se o Aluno foi aprovado\n\n");
    printf("\n\n2. Sair");
    printf("\n\nDigite o numero da opcao que voce deseja acessar:");
    scanf("%d",&opc);
    switch(opc){
    case 1:
        printf("\ntenha em mente que o ano letivo tem 200 Aulas\n");
        printf("====================================================================");
        printf("\nQual a nota final do Aluno:");
        scanf("%lf",&nota);
        printf("\n\nQuantas faltas o aluno teve no ano letivo:");
        scanf("%lf",&freq);
        
        freq = 200 - freq;
        
        if(nota >= 7 && freq >= (0.75 * 200)){
            printf("\nParabens!! O Aluno foi aprovado!\n");}
        else if(nota < 7 && freq >= (0.75 * 200)){
            printf("\nO aluno foi reprovado devido a sua Nota abaixo da media!\n");}
        else if(nota >= 7 && freq < (0.75 * 200)){
            printf("\nO aluno foi reprovado devido a sua Frequencia abaixo de 75%!\n");}
        else{
            printf("\nO aluno foi reprovado por nao atingir a Nota 7 ou maior, e nem a Frenquencia de 75 Porcento!\n");
        break;
        }
    case 2:
        printf("\n\nO Sistema foi encerrado\n\n");
        break;
    default:
        printf("\n\nOpcao invalida\n\n");
    }


    return 0;
}
