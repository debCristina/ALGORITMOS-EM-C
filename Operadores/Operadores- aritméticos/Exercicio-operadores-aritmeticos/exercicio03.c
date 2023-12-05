#include <stdio.h>

main(){

    //3.Dadas as medidas de uma sala, informe sua área.
    
    //declarar variaveis
    float larg, comprimento, area;

    //receber os dados
    printf("Informe o comprimento: ");
    scanf("%f", &comprimento);

    printf("Informe a larg:");
    scanf("%f", &larg);

    //realizar a operacao
    area = comprimento * larg;

    printf("A area e igual a: %.2f", area);

}