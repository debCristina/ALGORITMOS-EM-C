#include<stdio.h>

main(){

    /*3. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares (sem usar comando condicional).*/

    int numero, impar = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while(impar <= numero){
        printf("\n%d", impar);
        impar = impar + 2;
    }
}