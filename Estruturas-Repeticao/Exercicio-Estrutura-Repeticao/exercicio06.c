#include<stdio.h>

main(){
    /*6. Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim, apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade de frutas. Ao final, apresente o valor total da compra. */

    int opcao, quantidade, opcao_retorno;
    float preco, total_final;

    do{
        printf("Por favor, selecione a opção desejada");
        printf("\n[1] ABACAXI: 5,00 \n[2] MAcA: 1,00 \n[3]PERA: 4,00\n");
        scanf("%d", &opcao);
        printf("Quantidade: ");
        scanf("%d", &quantidade);

        switch(opcao){
        case 1:
            preco = 5.00;
            total_final += preco * quantidade;
            break;
        case 2:
            preco = 1.00;
            total_final += preco * quantidade;
            break;
        case 3:
            preco = 4.00;
            total_final += preco * quantidade;
            break;
        
        default:
            printf("Opcao não encontrada");
            break;
        }
        
        printf("Total da compra: %.2f \n", total_final);
        printf("[1] Retornar para o menu /n[2] Sair ");
        scanf("%d", &opcao_retorno);

    }while(opcao_retorno != 2);
}