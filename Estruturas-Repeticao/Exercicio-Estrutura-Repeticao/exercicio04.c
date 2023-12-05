#include<stdio.h>

main(){

    /*4. Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando números maiores que 0.*/

    int contador=1, numero = 3;

    while(contador <= 5){
        if(numero % 3 == 0){
            printf("\n%d", numero);
            contador ++;
    }
    numero ++;
    }
}