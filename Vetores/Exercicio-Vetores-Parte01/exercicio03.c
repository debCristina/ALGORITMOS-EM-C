#include<stdio.h>

main(){

    int vetorA[10];
    int vetorB[10];

    for(int i = 0; i <10; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetorA[i]);

    }
    for(int i = 0; i <10; i++){
        vetorB[1] = vetorA[i] *vetorA[i];
        printf("\nVetor A[%d] = %d Vetor B[%d] = %d", i, vetorA[i], i, vetorB[i]);
    }
}