#include <stdio.h>
#define texto "Entrada e saida de dados."
int main(){
    printf("%s \n",texto);

    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";

    printf("informe a sua altura \n");
    scanf("%f", &altura);

    printf("informe a sua idade \n");
    scanf("%d", &idade);

    printf("informe o seu nome: \n");
    scanf("%s", nome);

    printf("a sua altura informada : %.2f \n", altura);
    printf("a sua idade informada  : %d \n", idade);
    printf("o seu nome informado   : %s \n", nome);
}