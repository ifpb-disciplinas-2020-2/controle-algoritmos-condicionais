/* 
Escreva um programa em linguagem C leia um número inteiro, de 1 a 5, e imprima os número pares e impares
*/
#include <stdio.h>
int main(){
    // entrada: número inteiro    
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    switch(numero){
        case 1:
        case 3: 
        case 5: printf("ímpar \n"); break;
        case 2: 
        case 4: printf("par \n"); break;
        default: printf("Número fora do intervalo \n"); break;
    }
    return 0;
}