#include <stdio.h>
#define texto "Insira um numero"
int main(){
    int n1,n2, soma, div, sub, mult, rest;

    printf("%s \n", texto);
    scanf("%d", &n1);
    printf("%s \n", texto);
    scanf("%d",&n2);

    soma = n1 + n2;
    div = n1 / n2;
    sub = n1 - n2;
    mult = n1 * n2;
    rest = n1 % n2;

    printf("Soma: %d \n", soma);
    printf("Divisão: %d \n", div);
    printf("Multiplicação: %d \n", mult);
    printf("Subtração: %d \n", sub);
    printf("Resto: %i \n",rest);
}