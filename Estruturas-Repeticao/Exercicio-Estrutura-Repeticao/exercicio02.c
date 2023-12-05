#include<stdio.h>

main(){

    /*2. Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente*/

    int numero, contador;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(contador = numero; contador >= 0; contador --){
        printf("\n%d", contador);
    }
}
