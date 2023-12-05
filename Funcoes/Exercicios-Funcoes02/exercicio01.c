#include<stdio.h>

    /*1. Fazer um programa que solicita o total gasto pelo cliente de uma loja, imprime as opções de pagamento, solicita a opção desejada e imprime o valor total das prestações (se houverem).
    a) Opção: a vista com 10% de desconto
    b) Opção: em duas vezes (preço da etiqueta)
    c) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00).
    OBS: fazer uma função que imprime as opções, solicita a opção desejada e retorna a opção escolhida. No programa principal, testar a opção escolhida e ativar a função correspondente (uma função para cada opção). */

int escolher_opcao();
void a_vista(float total_compra);
void parcelar_em_duas(float total_compra);
void parcelar_em_tres(float total_compra);

main(){
    int opcao_escolhida;
    float total_compra;
    printf("Total da compra: ");
    scanf("%f", &total_compra);

    opcao_escolhida = escolher_opcao();
    switch (opcao_escolhida){
    case 1:
        a_vista(total_compra);
        break;
    case 2:
        parcelar_em_duas(total_compra);
        break;
    case 3:
        parcelar_em_tres(total_compra);
        break;
    }
}
int escolher_opcao(){
    int opcao;

    do{
    printf("\nEscolha a opcao de pagamento: ");
    printf("\n[01] A VISTA *10%% DE DESCONTO ");
    printf("\n[02] PARCELADO DUAS VEZES");
    printf("\n[03] DE 3 A 10 VEZES PARA COMPRAS ACIMA DE R$100.00 *3%% DE JUROS* \n-->");
    scanf("%d", &opcao);
    if (opcao < 1 || opcao > 10){
        printf("Opcao invalida");
    }
    }while (opcao < 1 || opcao > 10);
    
}

void a_vista(float total_compra){
    float desconto= (total_compra*10)/100;
    float total_final= total_compra - desconto;
    printf("\nValor do desconto: %.2f", desconto);
    printf("\nTotal da compra com desconto R$ %.2f", total_final);
}

void parcelar_em_duas(float total_compra){
    float total_parcela = total_compra/2;
    printf("\nValor total da compra: R$ %f", total_compra);
    printf("\nTotal da parcela: %.2f", total_parcela);
}

void parcelar_em_tres(float total_compra){
    int parcelas;
    float total_parcelas, valor_final, juros;
    if(total_compra < 100.00){
        printf("Opcao indisponivel para compras com valor abaixo de R$100.00");
        return;
    }
    do{
        printf("\nDigite o numero de parcelas desejadas: ");
        scanf("%d", &parcelas);
        if(parcelas < 3 || parcelas > 10){
            printf("Invalido, digite um valor correspondente");
        }
    }while(parcelas < 3 || parcelas > 10);
    juros= (total_compra*3)/100;
    valor_final = total_compra + juros;
    total_parcelas = valor_final/parcelas;
    printf("\nValor total da compra com juros: R$%.2f", valor_final);
    printf("\nTotal das parcelas: R$%.2f", total_parcelas);

}