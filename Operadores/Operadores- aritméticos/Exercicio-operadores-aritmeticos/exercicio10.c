#include<stdio.h>

main(){
    /*10. Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês,
    mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. 
    Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo 
    e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.*/


    //declarar variaveis
    float salario, vendas, comissao, comissao_carros, comissao_vendas, salario_final;
    int carros_vendidos;

    //receber dados
    printf("\nNumero de carros vendidos: ");
    scanf("%i", &carros_vendidos);

    printf("\nValor total das vendas: ");
    scanf("%f", &vendas);

    printf("\nSalario: ");
    scanf("%f", &salario);

    printf("\nComissao por carro vendido: ");
    scanf("%f", &comissao);

    //realizar as operações para encontrar o salario final
    comissao_carros = carros_vendidos * comissao; 
    comissao_vendas = vendas * 5 / 100;
    salario_final = salario + comissao_carros + comissao_vendas; 

    //mostrar o salario final
    printf("\nSalario final: %.2f", salario_final);
    
}