#include<stdio.h>

    /*Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.*/
    
main(){
    int valores[5];

    int *p= valores;

    for(int i = 0; i < 5; i++){
        printf("Digite o %d valor: ", i+1);
        scanf("%d", p + i);

    }
    for(int i =0; i < 5; i++){
        printf("%d ", *(p + i) + *(p + i));        
    }

}