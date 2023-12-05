#include<stdio.h>

main(){

    int vetor[5];
    int impar[5];
    int contador_impar=0;

    for(int i =0; i < 5; i++){
        do{
            printf("Digite um valor: ");
            scanf("%d", &vetor[i]);
            if(vetor[i] < 0 || vetor[i] > 50){
                printf("Valor invalido");
            }
        }while(vetor[i] < 0 || vetor[i] > 50);
    }

    printf("\nValores:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
        if(i % 2 == 1){
            printf("\n");
        }
    }

    printf("\nImpares:\n");
    for(int i = 0; i < contador_impar; i ++){
        printf("%d ", impar[i]);
        if(i % 2 == 1){
            printf("\n");
        }
    }
}
