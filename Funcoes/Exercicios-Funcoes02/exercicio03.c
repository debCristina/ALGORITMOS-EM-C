#include<stdio.h>

    /*3. Faça um procedimento que receba uma matriz A(10,10), por parâmetro, e realize as seguintes trocas:
    a linha 2 com a linha 8;
    a coluna 4 com a coluna 10;
    a diagonal principal com a secundária;
    a linha 5 com a coluna 10;
    O procedimento deve retornar a matriz alterada.*/

void imprimir(int matriz[10][10]){
    for(int i =0; i< 10; i++){
        for(int j =0; j< 10; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void trocar_linha2_linha8(int matriz[10][10]){
    int temp;
    for(int j =0; j < 10; j++){
        temp = matriz[1][j];
        matriz[1][j] = matriz[7][j];
        matriz[7][j] = temp; 
    }
}

void trocar_coluna4_coluna10(int matriz[10][10]){
    int temp;
    for(int i =0; i < 10; i++){
        temp = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = temp; 
    }
}

void trocar_diagonais(int matriz[10][10]){
    int temp;
    for(int i =0; i < 10; i++){
        temp = matriz[i][i];
        matriz[i][i] = matriz[1][9-i];
        matriz[i][9-i] = temp;
    }
}

void trocar_linha5_coluna10(int matriz[10][10]){
    int temp;
    for(int i =0; i < 10; i++){
        temp = matriz[4][i];
        matriz[4][i] = matriz[i][9];
        matriz[i][9] = temp;
    }
}

main(){
    int matriz[10][10];

    for(int i =0; i< 10; i++){
        for(int j =0; j< 10; j++){
            matriz[i][j] = i * 10 + j;
        }
    }
    // imprimir a matriz original
    imprimir(matriz);
    printf("\n");
    trocar_linha2_linha8(matriz);
    trocar_coluna4_coluna10(matriz);
    trocar_diagonais(matriz);
    trocar_linha5_coluna10(matriz);
    // imprimir com a troca
    imprimir(matriz);
}