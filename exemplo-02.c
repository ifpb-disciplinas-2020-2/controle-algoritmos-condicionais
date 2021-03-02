/* 
Desenvolva um algoritmo que leia um número e verifique se ele é maior ou igual a 10.
*/
#include <stdio.h> 
int main(){    
    int numero;
    // ler o número
    printf("Digite um número: ");
    scanf("%i", &numero);
    // verificar se ele é maior ou igual a 10
    if(numero >= 10){
        // apresentar ao usuário
        printf("O Número é maior ou igual a 10. \n");
    }
    
    return 0;
}