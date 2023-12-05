#include<stdio.h>

main(){

    /*5. Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adiciona-se ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado)
    Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.*/


    //declarar variaveis
    float mercadoria, frete, despesas, venda, lucro, total;

    //receber os dados
    printf("Valor da mercadoria: ");
    scanf("%f", &mercadoria);

    printf("\nFrete: ");
    scanf("%f", &frete);

    printf("\nDespesas: ");
    scanf("%f", &despesas);

    //calcular o lucro
    total = mercadoria + frete + despesas;

    //receber o valor de venda
    printf("O pruto custa %.2f. Qual o valor de venda: ", total);
    scanf("%f", &venda);

    //realizar as operações para obter a porcentagem do lucro
    lucro = (venda - total)/total *100;

    //mostrar o lucro em porcentagem
    printf("\nO lucro total é de: %.2f %%", lucro);
}