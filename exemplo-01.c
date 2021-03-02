/* 
Desenvolva um algoritmo capaz de verificar se 
um número inteiro, dados como entrada, é par ou impar
*/
#include <stdio.h> 
int main(){    
    int numero;
    // ler o número
    printf("Digite um número: ");
    scanf("%i", &numero);
    // verificar se ele é par ou ímpar
    // se o resto da divisão por 2 for igual a zero, par; caso contrário, ímpar.
    if(numero % 2 == 0){
        printf("Número par\n");
    }
    // apresentar ao usuário
    return 0;
}