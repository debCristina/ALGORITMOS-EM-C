#include<stdio.h>

main(){
    //Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma ascendente (do menor para o maior).

    int A= 7, B= 4, C=10;

    if((A < B) && (B < C)){
        printf("Os valores em sua foma ascendente e: %d, %d, %d", A, B, C);

    }else if((A < C) && (C< B)){
        printf("Os valores em sua forma ascendente e: %d, %d, %d", A, C, B);

    }else if((B < A) && (A < C)){
        printf("Os valores em ordem ascendente e: %d, %d, %d", B, A, C);

    }else if((B < C) &&( C < A)){
        printf("Os valores em ordem ascendente e: %d, %d, %d", B, C, A);

    }else if((C < A) && (A < B)){
        printf("Os valores em ordem ascendente e: %d, %d, %d", C, A, B);

    }else{
        printf("Os valores em ordem ascendente e: %d, %d, %d", C, B, A);

    }
}
