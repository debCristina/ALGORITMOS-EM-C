#include<stdio.h>

main(){

    int valores[10], contPar = 0;

    
    for(int i = 0; i <10; i++){
        printf("Digite um valor: ");
        scanf("%d", &valores[i]);
        if(valores[i] % 2 == 0){
            contPar++;
        }
    }
     
    for(int i = 0; i <10; i++){
        if(valores[i] % 2 == 0){
            printf("\n%d", valores[i]);
        }
    }
    printf("\nNumeros pares: %d", contPar);
}