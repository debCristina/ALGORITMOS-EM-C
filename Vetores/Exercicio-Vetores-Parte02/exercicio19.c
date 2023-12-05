#include<stdio.h>

main(){

    int vetor[50];

    for(int i = 0; i < 50; i ++){
        vetor[i] = (i + 55 * i) % (i + 1);
    }
     for(int i = 0; i < 50; i ++){
        printf("%d ", vetor[i]);
    }
}