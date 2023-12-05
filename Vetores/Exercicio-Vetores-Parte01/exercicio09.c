#include<stdio.h>

main(){

    int valores[6];

    for(int i = 0; i < 6; i++){

        do{
            printf("Ditgite um numero par");
            scanf("%d", &valores[i]);
            if(valores[i] % 2 != 0 ){
                printf("invalido");
            }
        }while(valores[i] % 2 != 0);
    }
    for(int i = 5; i >-0; i--){
        printf("\n%d", valores[i]);
    }
}

