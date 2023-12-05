#include<stdio.h>

main(){

    int valores[8], X, Y, soma;

    for(int i = 0; i < 8; i++){
        printf("Digite um numero: ");
        scanf("%d", &valores[i]);
    }

    printf("Infome o os valores correspondentes que deseja somar: ");
    printf("\n[X]: ");
    scanf("%d", &X);
    printf("[Y]: ");
    scanf("%d", &Y);

    soma = (valores[X] + valores[Y]) -2;

    printf("O resultado da soma entre os valores e : %d", soma);
}