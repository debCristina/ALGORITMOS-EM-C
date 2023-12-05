#include<stdio.h>

main(){
    //5. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.

    int cont_par=1, soma=0, num=2;

    while(cont_par <= 50){
        if(num % 2 ==0){
        soma += num;
        cont_par++;
    } 
        num ++;
    }

    printf("\n%d", soma);
}