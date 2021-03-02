/* 
Desenvolva um algoritmo que leia duas notas e determine se o aluno está aprovado, ou não. 
Considere a média maior que 7, aprovado; menor que 4, reprovado; e, maior que 4 e menor que 7, Final.
*/
#include <stdio.h>
int main(){
    int primeiraNota, segundaNota;
    float media;
    // ler o número
    printf("Digite duas notas: ");
    scanf("%i %i", &primeiraNota, &segundaNota);
    // calcular a média
    media = (float)(primeiraNota + segundaNota) / 2;
    if (media >= 7){ //verificar se a média é maior ou igual a 7
        printf("Aprovado\n");
    }else if (media < 4){ //verificar se a média é menor que 4
        printf("Reprovado\n");
    }else{
        printf("Final\n");
    }
    printf("valor da média: %.2f \n", media);

    return 0;
}