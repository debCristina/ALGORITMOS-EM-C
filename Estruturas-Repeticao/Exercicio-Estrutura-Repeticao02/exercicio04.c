#include<stdio.h>

main(){
    
    /*4) Faça um algoritmo que leia um número positivo e imprima seus divisores. Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/

    int valor, contador=1;

    printf("Digite um valor: ");
    scanf("%d", &valor);

    printf("DIVISORES: ");
    while(contador <= valor){
        if(valor % contador == 0){
            printf("%d ", contador);
        }
        contador++;
    }

}