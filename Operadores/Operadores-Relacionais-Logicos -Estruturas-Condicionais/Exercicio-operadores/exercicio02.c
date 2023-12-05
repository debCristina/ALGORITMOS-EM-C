#include<stdio.h>

main(){

    //2. Leia o salário e imprima se ganha mais que o salário mínimo;

    float salario;

    printf("Digite o seu salariio: ");
    scanf("%f", &salario);

    if( salario > 1320){
        printf("Voce recebe mais que um salariio minimo");

    }else{
        printf("Voce recebe menos ou o equivalente a um salario minimo");
    }
}