#include<stdio.h>

main(){

    int valores[10], maior_valor=0, posicao=0;

    for(int i = 0; i <10; i++){
        printf("Digite um valor: ");
        scanf("%d", &valores[i]);

        if(valores[i] > maior_valor ){
            maior_valor = valores[i];
            posicao = i;
        }
    }
   
    printf("O maior valor e: %d \nPosicao: %d", maior_valor, posicao);
}


