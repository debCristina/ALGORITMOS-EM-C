#include<stdio.h>

    /*Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda variável. Escreva o conteúdo das 2 variáveis na tela.*/
    
void trocar_valores(int *valor1, int *valor2){
    int aux;
    if(*valor2 > *valor1){
        aux = *valor1;
        *valor1 = *valor2;
        *valor2 = aux;
    }
}

main(){

    int numero1, numero2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &numero1);

    printf("Digite o segundo valor: ");
    scanf("%d", &numero2);
    
    trocar_valores(&numero1, &numero2);

    printf("\nPrimeiro valor alterado: %d", numero1);
    printf("\nSegundo valor alterado: %d", numero2);
}