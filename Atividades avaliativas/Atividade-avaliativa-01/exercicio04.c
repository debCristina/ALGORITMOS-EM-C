#include<stdio.h>
#include<math.h>

main(){

    /*4. Dados três valores A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, e se for classificá-los (imprimi-los) segundo os ângulos. (Triângulo Retângulo = 90º, Triângulo Obtusângulo > 90º, Triângulo Acutângulo < 90º)*/

    float A, B, C, cos1, cos2, cos3;

    printf("\n----------------------------------");
    printf("\nIdentificador de Triangulo Angular");
    printf("\n----------------------------------");

    printf("\nPor favor, informe os seguintes valores: ");
    printf("\n[A]: ");
    scanf("%f", &A);
    printf("[B]: ");
    scanf("%f", &B);
    printf("[C]: ");
    scanf("%f", &C);


    if((A < B + C) && (B < A + C) && (C < A + B)){
        printf("Esses valores correspondem a um triangulo");
        cos1 = (pow(B, 2) + pow(C, 2) - pow(A, 2))/ (2 * B * C);
        cos2 = (pow(A, 2) + pow(C, 2) - pow(B, 2))/ (2 * A * C);
        cos3 = (pow(A, 2) + pow(B, 2) - pow(C, 2))/ (2 * A * B );
        if(fabs(cos1) < 0.0001 || fabs(cos2) <0.0001 || (cos3) < 0.0001){
            printf("\nEstes valores correspondem a um triangulo retangulo");
        }else if(cos1 < 0.0 || cos2 < 0.0 || cos3 < 0.0){
            printf("\nEstes valores correspondem a um triangulo obtusangulo ");
        }else{
            printf("\nEstes valores correspondem a um triangulo acutangulo");
        }

    }else{
        printf("Estes valores nao correspondem a um triangulo");
    }

}