#include <stdio.h>

main(){
    
    /*7. Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. 
    Considerar ano com 365 dias e mês com 30 dias.*/


    //declarar variaveis
    int anos, meses, dias, total_dias;

    //receber dados
    printf("====CONTADOR DE DIAS DE VIDA====");
    printf("\nPor favor digite sua idade em anos meses e dias:");
    printf("\nAnos: ");
    scanf("%i", &anos);
    printf("\nMeses: ");
    scanf("%i", &meses);
    printf("\nDias: ");
    scanf("%d", &dias);

    //realizar as operações
    total_dias = anos * 365 + meses * 30 + dias;

    //mostrar o resultao
    printf("\nVoce tem no total %i dias de vida", total_dias);
}