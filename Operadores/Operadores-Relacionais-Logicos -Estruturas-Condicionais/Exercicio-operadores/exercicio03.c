#include<stdio.h>

main(){

    //3. Leia a altura e imprima se é maior que 1.8m;

    float altura;

    printf("Informe a sua altura: ");
    scanf("%f", &altura);

    if(altura > 1.80){
        printf("Voce e maior que 1.80 m");

    }else{
        printf("Sua altura e igual ou menor que 1.80 m");

    }
    
}