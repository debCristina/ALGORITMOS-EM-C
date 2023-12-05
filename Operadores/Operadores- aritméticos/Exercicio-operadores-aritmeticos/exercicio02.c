#include <stdio.h>

main(){
    //02.Escreva um programa que receba um número qualquer e mostre o seu dobro.

    //declarar variaveis
    int num, dobronum;

    //receber os dados
    printf("Digite um numero: ");
    scanf("%i", &num);

    //realizar a operacao
    dobronum = num*2;

    //saida de dados
    printf("Dobro: %d", dobronum);

}