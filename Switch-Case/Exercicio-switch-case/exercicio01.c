#include<stdio.h>

main(){
    /*
        Usando o comando switch, faça um algoritmo que leia o número de DDD e informe a qual cidade pertence, considerando só os seguintes valores: 
        61 - Brasília   
        71 - Salvador 
        11 - São Paulo 
        21 - Rio de Janeiro 
        32 - Juiz de Fora 
        19 - Campinas 
        27 - Vitória 
        31  - Belo Horizonte 
        Qualquer outro - uma cidade no Brasil sem identificação 
    */
    int DDD;

    printf("Informe o seu DDD: ");
    scanf("%d", &DDD);

    switch(DDD){
        case 61:
            printf("Brasilia");
            break;
        case 71:
            printf("\nSalvador");
            break;
        case 11:
            printf("\nSao Paulo");
            break;
        case 21:
            printf("\nRio de Janeiro");
            break;
        case 32:
            printf("\nJuiz de Fora");
            break;
        case 19:
            printf("\nCampinas");
            break;
        case 27: 
            printf("\nVitoria");
            break;
        case 31:
            printf("\nBelo Horizonte");
            break;
        default:
            printf("\nCidade sem identificacao");
    }
}