#include<stdio.h>

    /*Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição desse array.*/
    
main(){
    float valores[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    for(int i=0; i < 10; i++){
        float *x = &valores[i];
        printf("\nEndereco de memoria do %d valor: %d", i+1, x);
    }

}