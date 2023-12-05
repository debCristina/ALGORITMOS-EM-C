#include<stdio.h>

main(){

    //Construa um algoritmo que, dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor. 

    int A= 5, B= 6, C= 0, D= 18, maior, menor; 

    //verificar o maior de todos
    if(A >B && A > C && A > D){
        maior = A;

    }else if(B > A && B > C && B > D){
        maior = B;

    }else if(C > A && C > B && C > D){
        maior = C;

    }else{
        maior = D;

    }
    //veficando o menor
    if(A < B && A < C && A < D){
        menor = A;
    }else if(B < A && B < C && B < D){
        menor = B;
    }else if(C < A && C < B && C < D){
        menor = C;
    }else{
        menor = D;
    }
    printf("Maior: %d, Menor: %d", maior, menor);

}
   