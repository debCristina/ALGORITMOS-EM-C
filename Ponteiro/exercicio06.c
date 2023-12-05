#include<stdio.h>

    /*Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda variável. Escreva o conteúdo das 2 variáveis na tela.*/
    
int soma_dobro(int *A, int *B){
    *A = *A + *A;
    *B = *B + *B;

    int soma = *A + *B;

    return soma;    
}

main(){

    int A, B;

    printf("Informe o valor de A: ");
    scanf("%d", &A);

    printf("Informe o valor de B: ");
    scanf("%d", &B);

    int resultado = soma_dobro(&A, &B);
    printf("\nDobro de A: %d", A);
    printf("\nDobro de B: %d", B);
    printf("\nResultado da soma : %d", resultado);
}