#include<stdio.h>

main(){
    /*
        Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor a ser pago por 
        aquele lanche. Considere que a cada execução somente será calculado um item.
    */
    
    int codigo_produto, quantidade;
    float preco, total;

    printf("Por favor escolha o codigo do produto: \n");
    printf("[100] Cachorro Quente \n[101] Bauru simples \n[102 Bauru c/ovo \n[103] Hamburger \n[104] Cheesebrger\n");
    scanf("%d", &codigo_produto);

    printf("Quantidade: ");
    scanf("%d", &quantidade);

    switch(codigo_produto){
        case 100: 
            preco = 10.10;
            total = preco * quantidade;
            printf("Total a pagar: R$%.2f", total );
            break;

        case 101:
            preco = 8.30;
            total = preco * quantidade;
            printf("Total a pagar: R$%.2f", total );
            break;
        case 102: 
            preco = 8.50;
            total = preco * quantidade;
            printf("Total a pagar: R$%.2f", total );
            break;
        case 103:
            preco = 12.50;
            total = preco * quantidade;
            printf("Total a pagar: R$%.2f", total );
            break;
        case 104:
            preco = 13.25;
            total = preco * quantidade;
            printf("Total a pagar: R$%.2f", total );
            break;
        default:
            printf("Informacao não encontrada");
        
    }
}