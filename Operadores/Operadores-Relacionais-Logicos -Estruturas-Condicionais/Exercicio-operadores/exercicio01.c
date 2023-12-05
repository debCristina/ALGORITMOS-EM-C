#include <stdio.h>

main(){

    //1. Leia a idade e imprima se a pessoa é maior;

    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("Voce e maior de idade");

    }else{
        printf("Voce nao e maior de idade");
    }
}