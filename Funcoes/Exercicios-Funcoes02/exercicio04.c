#include<stdio.h>

    /*4. Faça um procedimento que receba, por parâmetro, uma matriz 61x10. O procedimento deve somar individualmente as colunas da matriz e armazenar o resultado na 61a linha da matriz. O procedimento deve retornar a matriz alterada.*/

void imprimir(int matriz[61][10]){
    for(int i =0; i< 61; i++){
        for(int j =0; j< 10; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void somar_colunas(int matriz[61][10]){
    // zerar a linha 61
    for(int j =0; j < 10; j++){
        matriz[60][j] = 0;
    }
    // somar colunas
    for(int j = 0; j < 10; j++){
        for(int i = 0; i < 60; i++){
            matriz[60][j] += matriz[i][j]; 
        }
    }
}

main(){
     int matriz[61][10];

    for(int i =0; i< 61; i++){
        for(int j =0; j< 10; j++){
            matriz[i][j] = i * 10 + j;
        }
    }

    somar_colunas(matriz);
    imprimir(matriz);
}