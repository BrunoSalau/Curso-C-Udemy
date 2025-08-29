#include<stdio.h>
int main(){
    int n,op;
    printf("Qual tabuada voce quer saber?:");
    scanf("%d",&n);
    printf("\n===TABUADA DO %d===\n",n);
    for(int i = 0; i<=10; i++){
        printf("|   %d x %d = %d\n",n,i,(n*i));
    }
    printf("\nQuer saber de outras tabuadas?\n");
    printf("\n1. Sim\n\n2. Nao\n\nEscolha uma opcao:");
    scanf("%d",&op);

    switch(op){
        case 1:
            for(int o = 0;o <= 10;o++){
            printf("====Tabuada do %d====\n",o);
            for(int u=0; u<=10; u++){
            printf("|   %d x %d = %d\n",o,u,(u*o));
        }
        }

        break;
        default:
            printf("\nVoce escolheu a opcao de saida!\n");

    }
    printf("\nObrigado por usar a super calculadora!\n");

}
