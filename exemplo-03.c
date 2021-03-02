/* 
Desenvolva um algoritmo que leia duas notas e determine se o aluno está aprovado, ou não. 
Considere a média maior que 7, aprovado; menor que 4, reprovado; e, maior que 4 e menor que 7, Final.


// Operadores relacionais
> - maior
>= - maior ou igual
< - menor
<= - menor ou igual
== - igual a
!= - diferente de 


// Operadores lógicos
E  ->  V E V  --- &&
OU ->  V ou F --- ||
Não -> V -> F --- !

*/
#include <stdio.h> 
int main(){    
    int primeiraNota, segundaNota;
    float media;
    // ler o número
    printf("Digite duas notas: ");
    scanf("%i %i", &primeiraNota, &segundaNota);
    // calcular a média
    media = (float) (primeiraNota+segundaNota) / 2;
    //verificar se a média é maior ou igual a 7
    if(media >= 7){
        printf("Aprovado\n");
    }
    //verificar se a média é menor que 4
    if(media < 4){
        printf("Reprovado\n");
    }
    //verificar se a média é maior que 4 E menor que 7, Final.
    // if(media>=4){
    //     if(media<7){
    //         printf("Final\n");
    //     }
    // }
    //verificar se a média é maior que 4 E menor que 7, Final.
    if(media>=4 && media < 7){
        printf("Final\n");
    }    

    printf("valor da média: %.2f \n", media);
    
    return 0;
}