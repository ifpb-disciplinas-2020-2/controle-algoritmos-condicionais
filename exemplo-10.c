/* 
E03.9 Escreva um programa em linguagem C leia um número inteiro, de 1 a 5, e imprima o
seu valor por extenso.

Menu:
    1 - exibir uma mensagem
    2 - ler um numero e exibi-lo
    3 - sair

*/
#include <stdio.h>
int main(){
    int numero;
    int leitor;
    printf("\t Menu: \n"
        "\t 1 - exibir uma mensagem \n"
        "\t 2 - ler um numero e exibi-lo \n"
        "\t 3 - sair \n"
    );
    printf("Digite um número: ");
    scanf("%d", &numero);
    switch(numero){
        case 1: printf("Oi \n"); break;
        case 2: 
            printf("Digite um número \n"); 
            scanf("%d", &leitor);
            printf("Numero : %d \n", leitor);
            break;
        case 3: printf("sair \n"); break;
        default: printf("Opção inválida \n"); break;
    }
 
    return 0;
}