#include<stdio.h>

main(){
    int valores[10], maior_valor=0, menor_valor=0;
    
    menor_valor = valores[10];

    for(int i = 0; i <10; i++){
        printf("Digite um valor: ");
        scanf("%d", &valores[i]);

        maior_valor = valores[0];
        menor_valor = valores[0];

        if(valores[i] > maior_valor){
            maior_valor = valores[i];
        }
        if(valores[i] < menor_valor){
            menor_valor= valores[i];
        }
    }
    printf("Maior valor: %d", maior_valor);
    printf("\nMenor valor: %d", menor_valor);  
}