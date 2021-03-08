/* 
E03.8 Escreva um programa em linguagem C que leia uma letra e verifique se a letra digitada é L ou D. 
Conforme a letra informada, o algoritmo deve imprimir em tela uma das seguintes mensagens: 
“L – Ligar”, “D – Desligar” ou “Outra tecla – Opção Inválida”.
*/
#include <stdio.h>
int main(){
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    switch (letra){
        case 'L':
            printf("L – Ligar \n");
            break;
        case 'D':
            printf("D – Desligar \n");
            break;
        default:
            printf("Outra tecla – Opção Inválida \n");
            break;
    }
 
    return 0;
}