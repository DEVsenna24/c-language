#include <stdio.h>

int main(){
    // aqui declaramos o valor da variavel idade que vai começar com 0 
    //mas daqui pra frente vamos vamos declarar com outro valor utilizando o scanf
    int idade = 0;

    printf("numero de conquistas: %d.\n", idade);

    printf("quantas missoes vc fez hoje? no informe aqui: \n");
    scanf("%d", &idade);

    printf("o numero de missoes foi atualizada, vc agora esta com %d missões na sua conta \n", idade);
}