#include<stdio.h>

main(){

    /*Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico. */

    float alt_chico= 1.50, alt_ze=1.10;
    int  contador_anos=0;

    while (alt_ze <= alt_chico ){
            alt_ze +=0.03;
            alt_chico +=0.02;
            contador_anos ++;
    }

    printf("Serao necessario %d anos para que Ze seja maior que Chico", contador_anos);
}