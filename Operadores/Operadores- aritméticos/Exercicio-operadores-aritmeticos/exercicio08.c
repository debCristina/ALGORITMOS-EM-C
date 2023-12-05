#include<stdio.h>

main(){
    /*8. Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste. 
    Calcular e escrever o valor do novo salário.*/


    //declarar variaveis
    float salario, percentual_reajuste, valor_reajuste, novo_salario;

    //receber os dados
    printf("Salario: ");
    scanf("%f", &salario);

    printf("\nPercentual de reajuste: ");
    scanf("%f", &percentual_reajuste);

    //calcular o salario com reajuste
    valor_reajuste = salario * percentual_reajuste / 100;
    novo_salario = salario + valor_reajuste;

    //mostrar o salario com reajuste
    printf("\nO seu novo salario com o reajuste sera de %.2f", novo_salario);


}