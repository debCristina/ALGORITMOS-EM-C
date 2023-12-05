#include<stdio.h>

    /* Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.*/
void mudar_valores(int *numero, float *valor, char *caractere){
    *numero = 20;
    *valor = 5.5;
    *caractere = 'B';
}


main(){
    int numero = 10;
    float valor = 2.5;
    char caractere= 'A';

    printf("\nNumero: %d", numero);
    printf("\nValor real: %.2f", valor);
    printf("\nCaractere: %c", caractere);

    mudar_valores(&numero, &valor, &caractere);

    printf("\n\nNumero modificado: %d", numero);
    printf("\nValor real modificado: %.2f", valor);
    printf("\nCaractere modificado: %c", caractere);



}