#include<stdio.h>

main(){

    int valores[5], maior=0, menor=0, posicao_maior=0,posicao_menor=0;

    for(int i =0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%d", &valores[i]);

        maior=valores[0];
        menor=valores[0];
        
    }
    for( int i =0; i < 5; i++){
        if(valores[i] > maior){
            maior = valores[i];
            posicao_maior = i;
        }
        if(valores[i] < menor){
            menor = valores[i];
            posicao_menor = i;
        }
    }
    printf("Maior valor: %d Posicao: %d", maior, posicao_maior);
    printf("\nMenor valor: %d Posicao: %d", menor, posicao_menor);
}