#include<stdio.h>

main(){
    
    /*3) Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34. */

    int valor=0, t1=0, t2=1, termo_atual;

    do{
        printf("Digite um valor: ");
        scanf("%d", &valor);
         
        if(valor < 0){
            printf("Valor invalido. Por favor informe um numero maior ou igual a 0.");
        }

    }while(valor<0);

    if(valor==0){
        termo_atual = t1;
    }else if(valor == 1){
        termo_atual = t2;
    }else{
        printf("%d ", t1);
        printf("%d ", t2);
        for(int i = 3; i <=valor; i++){
            termo_atual = t1 + t2;
            
            printf("%d ", termo_atual);
            t1 = t2;
            t2 = termo_atual;
        }
    }

    printf("\nO enesimo termo da sequencia de fibonacci e : %d", termo_atual);
   
    
}