#include<stdio.h>

main(){

    int valores[6];

    for(int i = 0; i <6; i++){
        printf("Digite um valor: ");
        scanf("%d", &valores[i]);
    }

    for(int i = 5; i >= 0; i--){
        printf("\n%d", valores[i]);
    }
}