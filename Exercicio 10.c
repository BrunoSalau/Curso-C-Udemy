#include <stdio.h>

int main()
{
    int capacidade,quantidade;
    printf("Qual a capacidade total do estadio:");
    scanf("%d",&capacidade);
    printf("Qual a quantidade de torcedores presentes");
    scanf("%d",&quantidade);
    if(quantidade > (capacidade * 0.90)){
        printf("\nLotado!\n");
    }
    else if(quantidade <= (capacidade * 0.90) && quantidade > (capacidade * 0.70)){
        printf("\nOtima presenca de publico!!\n");
    }
    else if(quantidade <= (capacidade * 0.70) && quantidade > (capacidade * 0.50)){
        printf("\nPublico razoavel\n");
    }
    else if(quantidade <= (capacidade * 0.50)){
        printf("TEM NINGUEM NESSA PORRAAAAAAA!!!!");
    }
    return 0;
}
