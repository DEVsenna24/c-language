#include <stdio.h>

int main(){

    int numero = 0;
    int numero2 = 0;
    printf("Informe um numero");
    scanf("%i", &numero);

    printf("Informe outro valor");
    scanf("%i", &numero2);

    int soma = numero + numero2;
    printf("%i",soma);
}