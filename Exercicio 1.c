#include <stdio.h>
int main(){
    char nome[50];
    int idade, gols;
    printf("Bem vindo ao cadastro jogador profissional!!\nPor gentileza informe alguns de suas informacoes que forem pedidas a seguir!");
    printf("\n\nQual o seu nome:");
    scanf("%s",&nome);
    printf("\n\nQual a sua idade:");
    scanf("%d",&idade);
    printf("\n\nQuantos gols voce ja fez:");
    scanf("%d",&gols);
    printf("\n\nParabens %s\nVoce conseguiu  concluir seu cadastro com sucesso\nVoce possui %d anos e %d gols em sua carreira!\n\n",nome,idade,gols);
    return 0;
}
