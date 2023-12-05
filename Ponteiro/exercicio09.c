#include<stdio.h>

    /*Crie um programa que contenha uma matriz de inteiros contendo 3 linhas e 3 colunas. Imprima o endereço de cada posição dessa matriz.*/
    
int main(){
    int matriz[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};  

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("\nMatriz[%d][%d] endereco de memoria: %d",i,j, &matriz[i][j]);
        }
    }

}
    
