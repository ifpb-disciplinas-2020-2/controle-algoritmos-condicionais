/* 
E03.8 Escreva um programa em linguagem C que leia uma letra e verifique se a letra digitada é L ou D. 
Conforme a letra informada, o algoritmo deve imprimir em tela uma das seguintes mensagens: 
“L – Ligar”, “D – Desligar” ou “Outra tecla – Opção Inválida”.
*/
#include <stdio.h> 
int main(){
    // entrada: letra (caracter)
    char letra;
    printf("Digite uma letra: \n");
    scanf("%c", &letra);
    if(letra == 'L'){
        printf("L – Ligar \n");
    }else if(letra == 'D'){
        printf("D – Desligar \n");
    } else{
        printf("Outra tecla – Opção Inválida \n");
    }
    return 0;
}