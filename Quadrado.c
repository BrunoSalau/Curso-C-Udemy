#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Quantos por quantos voce quer desenhar um quadrado de asteriscos:");
    scanf("%d",&n);
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
