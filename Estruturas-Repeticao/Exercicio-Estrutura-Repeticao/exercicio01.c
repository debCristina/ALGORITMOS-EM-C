#include<stdio.h>

main(){
    /*1. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.*/

    int numero, contador;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(contador= 0; contador <= numero; contador ++){
        printf("\n%d", contador);

    }
}
