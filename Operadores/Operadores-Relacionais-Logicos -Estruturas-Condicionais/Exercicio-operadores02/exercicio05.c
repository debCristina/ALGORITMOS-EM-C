#include<stdio.h>

main(){
    //Construir um algoritmo que leia um número e imprima se ele é igual a 5, a 200, a 400, se está no intervalo entre 500 e 1000, ou se ela está fora dos escopos anteriores. 

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero == 5){
        printf("O numero e igual a 5");

    }else if (numero == 200){
        printf("O numero e igual a 200");

    }else if(numero == 400){
        printf("O numero e igual a 400");

    }else if((numero > 500) && (numero < 1000)){
        printf("O numero esta entre 500 e 1000");

    }else{
        printf("O numero nao corresponde a nenhum dos escopos, Pois:");
        printf("\nNao e igual a 5\nNao e igual a 200 \nNao e igual a 400 \nNao esta entre 500 e 1000");
    }
}