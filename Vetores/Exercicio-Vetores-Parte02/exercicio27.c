#include<stdio.h>

main(){
    int vetor[10];
    int contador_primo=0;

    for(int i =0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 10; i++){
        contador_primo=0;
        for(int j = 1; j <= vetor[i]; j++) {
            if(vetor[i] % j == 0) {
                contador_primo++;
            }
        }
        if (contador_primo == 2) {
            printf("\nNumero primo:%d Posicao:%d", vetor[i], i);
        }
    }
}

