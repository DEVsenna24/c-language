#include <stdio.h>
#define texto "Entrada e saida de dados"

int main(){
    printf("%s\n", texto);

    int idade = 0;
    float altura = 0.0;
    char  nome[50] = "";

    //atribuir um nome ao usuario
    printf("informe o seu nome:");
    scanf( "%s", nome);
    
    //atribuir uma idade ao usuario
    printf("Informe a sua idade:");
    scanf("%i",&idade);
    
    //atribuir uma altura ao usuario
    printf("Informe a sua altura:");
    scanf("%f",&altura);
    
    //valores finais
    printf("Nome: %s \n",nome);
    printf("Idade: %i\n",idade);
    printf("Altura: %.2f \n",altura);
}