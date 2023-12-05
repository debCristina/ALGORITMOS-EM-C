#include<stdio.h>

main(){

    /*Dado três valores, A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for, se é um triangulo escaleno, um triangulo equilátero ou um triangulo isósceles*/

    float A, B, C;

    printf("\n--------------------------");
    printf("\nIdentificador de Triangulo");
    printf("\n--------------------------");

    printf("\nPor favor, informe os seguintes valores: ");
    printf("\n[A]: ");
    scanf("%f", &A);
    printf("[B]: ");
    scanf("%f", &B);
    printf("[C]: ");
    scanf("%f", &C);

    if((A < B + C) && (B < A + C) && (C < A + B)){
        printf("Esses valores correspondem a um triangulo");
        if(A == B && A == C){
            printf("\nOs valores correspondem a um triangulo equilatero");
        }else if(A==B || A==C || B==C){
            printf("\nOs valores correspondem a um traiangulo isosceles");
        }else{
            printf("\nOs valores correspondem a um triangulo escaleno");
        }
    }else{
        printf("Esses valores nao correspondem a um traingulo");
    }
}