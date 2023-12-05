#include<stdio.h>
#include<math.h>
main(){
    //Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo.

    int numero, quadrado_numero; 
    double raiz_quadrada;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero >= 0){
        raiz_quadrada = sqrt(numero);
        printf("Raiz quadrada: %.2lf", raiz_quadrada);

    }else{
        quadrado_numero = pow(numero, 2);
        printf("Quadrado de %d e %d", numero, quadrado_numero);
    }

}