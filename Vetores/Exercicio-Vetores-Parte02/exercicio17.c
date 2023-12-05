#include<stdio.h>

main(){
    
    int vetor[5];

    for(int i =0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);

    }

    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j ++){
            if(vetor[i] < 0){
                vetor[i] = 0;
            }
        }
        printf("\nvalor %d: %d", i+1, vetor[i]);
    }
}