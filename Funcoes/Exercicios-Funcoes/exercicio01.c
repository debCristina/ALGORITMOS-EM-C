#include<stdio.h>

int maior(int n1, int n2){
    if(n1 > n2){
        return n1;
    }else{
        return n2;
    }
}

main(){
    int num1, num2;

    printf("Digite os valores de entrada: ");
    scanf("%d %d", &num1, &num2);

    int resultado = maior(num1, num2);

    printf("Resultado: %d", resultado);
}

