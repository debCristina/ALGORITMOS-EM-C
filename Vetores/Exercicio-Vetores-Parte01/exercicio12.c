#include<stdio.h>

main(){

    int valores[5], maior=0, menor=0, soma=0, media=0; 

    for(int i =0; i <5; i++){
        printf("Digite um numero: ");
        scanf("%d", &valores[i]);
        soma += valores[i];
        maior = valores[0];
        menor = valores[0];

        if(valores[i] > maior){
            maior = valores[i];
        }

        if(valores[i] < menor){
            menor = valores[i];
        }
    }

    for( int i=0; i< 5; i ++){
        printf("\nValor: %d", valores[i]);
    }
    media = soma / 5;
    printf("\nMaior valor: %d \nMenor valor: %d", maior, menor);
    printf("\nMedia geral: %d", media);
}