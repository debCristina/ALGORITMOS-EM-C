#include<stdio.h>

main(){
    int vetorA[5];
    int vetorB[5];
    int produto_escalar=0;

    for(int i = 0; i <5; i++){
        printf("Digite o valor do primeiro vetor: ");
        scanf("%d", &vetorA[i]);
    }

    for(int i = 0; i <5; i++){
        printf("Digite o valor do segundo vetor: ");
        scanf("%d", &vetorB[i]);
    }
    for(int i = 0; i < 5; i++){
        produto_escalar += vetorA[i] * vetorB[i];
    }
    for(int i = 0; i < 5; i++){
        printf("\nValor A:%d ", vetorA[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("\nValor B:%d", vetorB[i]);
    }

    printf("\nProduto Escalar: %d", produto_escalar);
}