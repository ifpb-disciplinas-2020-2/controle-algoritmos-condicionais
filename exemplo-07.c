/* 
E03.9 Escreva um programa em linguagem C leia um número inteiro, de 1 a 5, e imprima o
seu valor por extenso.
*/
#include <stdio.h>
int main(){
    // entrada: número inteiro    
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    // const int UM = 1;
    switch(numero){
        case 1: printf("Um \n"); break;
        case 2: printf("Dois \n"); break;
        case 3: printf("Três \n"); break;
        case 4: printf("Quatro \n"); break;
        case 5: printf("Cinco \n"); break;
        default: printf("Número fora do intervalo \n"); break;
    }
 
    return 0;
}