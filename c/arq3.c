#include <stdio.h>

int main(){
    int num = 0;    
 //informação da variavel atual
    printf("Valor inicial = %i\n", num);
    
    printf("Me informe um valor:\n");
    scanf("%i", &num);
 
 //o novo valor da variavel vai sair aqui
    printf("Valor final = %i", num);
}