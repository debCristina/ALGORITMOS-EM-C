#include<stdio.h>

main(){

    int valores[10], num_negativo=0, soma_positivo=0;


    for(int i = 0; i < 10; i ++){
        printf("Digite um numero: ");
        scanf("%d", &valores[i]);

        if(valores[i] < 0 ){
            num_negativo ++;
        }
        if(valores[i] > 0){
            soma_positivo += valores[i];
        }
    }
    
    printf("Numeros negativos: %d", num_negativo);
    printf("\nSoma dos numeros positivos: %d", soma_positivo);
}