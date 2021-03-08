/* 
E03.1 Escreva um programa em linguagem C que leia um número inteiro diferente de zero e
informe se este número é positivo ou negativo.
*/
#include <stdio.h> 
int main(){    
    int numero;
    //entrada: número inteiro; número será diferente de zero
    printf("Digite um número: \n");
    scanf("%d", &numero);
    //construção
    // positivo, se ele for maior que zero; 
    // negativo, se ele for menor que zero; 
    if(numero > 0 ){
        //saída: número é positivo ou negativo
        printf("Positivo \n");
    }
    if(numero < 0){
        //saída: número é positivo ou negativo
        printf("Negativo \n");
    }
    
    // printf("Teste");
    return 0;
}