#include <stdio.h>
#include <math.h>
main(){
   //01. Escreva um programa que receba dois números e mostre a soma, a subtração, a multiplicação e a divisão desses números
   
   //Declaraçao de variaveis
   int num1, num2, soma, sub, mult;
   float div;

   printf("Digite o primeiro numero:");
   scanf("%d", &num1);

   printf("\nDigite o segundo numero: ");
   scanf("%d", &num2);

    //montar as operaçoes com os operadores
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    
    div = (float)num1 / (float)num2;

    //saida dos dados
    printf("\nSoma: %d", soma);
    printf("\nSubtracao: %d", sub);
    printf("\nDivisao: %f", div);
    printf("\nMultiplicacao: %d", mult);

}