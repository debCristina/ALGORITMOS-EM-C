#include <stdio.h>

main(){
    //4. Dado um valor em reais e a cotação do dólar, converta esse valor para dólares.

    //declarar variaveis
    float real, dolar;

    //receber os dodos
    printf("Informe o valor em real (R$): ");
    scanf("%f", &real);

    //realizar as operacoes
    dolar = real * 0.20;

    //saida de dados
    printf("O valor convertido e igual a USD: %.2f", dolar);

}