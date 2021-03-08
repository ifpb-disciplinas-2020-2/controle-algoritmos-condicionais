/* 
E03.4 Escreva um programa em linguagem C que leia cinco números reais, calcule e exiba 
quantos destes números lidos são maiores que 10.
Exemplo de saída: “Foram lidos 3 números maiores que 10”
*/
#include <stdio.h> 
int main(){    
    float numero_um, numero_dois, numero_tres, numero_quatro, numero_cinco;
    int contador = 0;
    // entrada : cinco números reais    
    printf("Digite cinco números: \n");
    scanf("%f%f%f%f%f", &numero_um, &numero_dois, &numero_tres, &numero_quatro, &numero_cinco);
    // calcular quantos dos números são maiores que 10
    // 12 3 4 8 19
    if(numero_um > 10){
        // contador = contador + 1; // contador = 1 
        // contador += 1; // contador = 1 
        contador ++; // contador = 1 
    }     
    if(numero_dois > 10){
        contador = contador+1;
    }     
    if(numero_tres > 10){
        contador = contador+1;
    }    
    if(numero_quatro > 10){
        contador = contador+1;
    }    
    if(numero_cinco > 10){
        contador = contador+1; // contador = 2
    }
    // saída
    printf("Foram lidos %d números maiores que 10 \n", contador);
    return 0;
}