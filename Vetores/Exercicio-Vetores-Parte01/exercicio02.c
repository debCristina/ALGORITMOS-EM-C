#include<stdio.h>

main(){

    int inteiros[6];

    for(int i = 0; i < 6; i++){
        printf("Digite um numero: ");
        scanf("%d", &inteiros[i]);
    }

    for(int i = 0; i < 6; i++){
         printf("\nInteiro[%d] = %d ", i, inteiros[i]);
    }
}
