/* 
E03.6 Escreva um programa em linguagem C que recebe a dimensão dos três lados de um triângulo. 
Inicialmente, o algoritmo deve verificar se os lados informados podem formar um triângulo 
(a soma de dois lados não pode ser menor que o terceiro lado). Caso seja possível formar um triângulo,
 o algoritmo deve indicar se o triângulo é equilátero, isósceles ou escaleno. Considere que em um triângulo equilátero: 
todos os lados iguais; isósceles: dois lados iguais; escaleno: todos os lados diferentes.
*/
#include <stdio.h> 
int main(){
    int primeiro, segundo, terceiro;   
    // entrada: três lados de um triângulo 
    printf("Digite os três lados do triângulo: \n");
    scanf("%d%d%d", &primeiro, &segundo, &terceiro);
    // se os lados informados podem formar um triângulo
    if( (primeiro + segundo < terceiro) || (primeiro + terceiro < segundo) || (terceiro + segundo < primeiro)   ){
        printf("Os lados não formam um triângulo \n");
    }else{ // se for um triângulo
    // se o triângulo é equilátero, isósceles ou escaleno.
        if((primeiro == segundo) && (primeiro == terceiro) && (segundo == terceiro)){
            printf("equilátero \n");
        }else if( (primeiro == segundo) || (primeiro == terceiro) || (segundo == terceiro)){
            printf("isósceles \n");
        // }else if( (primeiro != segundo) && (primeiro != terceiro) && (segundo != terceiro)){
        }else{ // se e somente se, todos forem diferentes
            printf("escaleno \n");
        }
    }
    
    
    return 0;
}