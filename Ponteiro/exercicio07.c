#include<stdio.h>

    /*Crie um programa que contenha uma função que permita passar por parâmetro dois números inteiros A e B. A função deverá calcular a soma entre estes dois números e armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função principal.*/
    
void soma_valores(int *A, int *B){
    *A = *A + *B;
}

main(){
    int A=5, B=10;

    printf("Valor de A: %d", A);
    printf("\nValor de B: %d", B);


    soma_valores(&A, &B);

    printf("\n\nValor de A modificado: %d", A);
    printf("\nValor de B: %d", B);

}