#include<stdio.h>

main(){

    /*
        Criar um algoritmo que informe a quantidade total de calorias de uma refeição a partir do usuário que deverá informar o prato, a sobremesa e a bebida
    */

    int prato, sobremesa, bebida, cal_prato, cal_sobremesa, cal_bebida, total_cal;

    printf("\n----------");
    printf("\n Pratos ");
    printf("\n----------");
    printf("\nSelecione a opcao de prato: ");
    printf("\n[1] Vegetariano \n[2] Peixe \n[3] Frango \n[4] Carne \n");
    scanf("%d", &prato); 
    
    printf("\n------------");
    printf("\n Sobremesas");
    printf("\n------------");
    printf("\nSelecione a opcao de sobremesa: ");
    printf("\n[1] Abacaxi \n[2] Sorvete Diet \n[3] Mouse Diet \n[4] Mouse Chocolate \n");
    scanf("%d", &sobremesa);


    printf("\n------------");
    printf("\n Bebidas");
    printf("\n------------");
    printf("\nSelecione a opcao de bebida: ");
    printf("\n[1] Cha \n[2] Suco de Laranja \n[3] Suco de Melão \n[4] Refrigerante Diet \n");
    scanf("%d", &bebida);

    switch(prato){
        case 1: 
            cal_prato = 180;
            break;
        case 2:
            cal_prato = 230;
            break;
        case 3: 
            cal_prato = 250;
            break;
        case 4: 
            cal_prato = 350;

    }
    switch(sobremesa){
        case 1: 
            cal_sobremesa = 75;
            break;
        case 2:
            cal_sobremesa = 110;
            break;
        case 3: 
            cal_sobremesa = 170;
            break;
        case 4: 
            cal_sobremesa = 200;
    }
    switch(bebida){
        case 1: 
            cal_bebida = 20;
            break;
        case 2:
            cal_bebida = 70;
            break;
        case 3: 
            cal_bebida = 100;
            break;
        case 4: 
            cal_bebida = 65;
    }
    total_cal = cal_prato + cal_sobremesa + cal_bebida;
    printf("Total de calorias: %d cal", total_cal);
}
