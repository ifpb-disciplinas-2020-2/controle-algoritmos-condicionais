#include <stdio.h>
int main(){
    int numero, retorno;
    printf("Digite um número: ");
    scanf("%i", &numero);
    retorno = numero > 10 ? 1 : 0; 
    printf("O valor do retorno: %i \n", retorno);
    return 0;
}