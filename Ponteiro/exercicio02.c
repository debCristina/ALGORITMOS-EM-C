#include<stdio.h>
    /* Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.*/
    
main(){
    int numero1= 10, numero2=20;

    printf("\nEndereco de memoria do primeiro valor: %d", &numero1);
    printf("\nEndereco de memoria do segundo valor: %d", &numero2);

    if(&numero1 > &numero2){
        printf("\nO endereco o primeiro valor e maior");
    }else{
        printf("\nO endereco do segundo valor e maior");
    }
}