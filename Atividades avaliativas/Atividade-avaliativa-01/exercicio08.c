#include<stdio.h>

main(){

    float salario=0, total_salario=0, media_salario, media_filhos, maior_salario=0, percentual_pessoas;
    int filhos, pessoas=0, total_filhos=0, cont_salario_100=0;
 
    do{

        pessoas ++;

        printf("Salario: ");
        scanf("%f", &salario);
        printf("Numero de filhos: ");
        scanf("%d", &filhos);
        
        total_salario += salario;
        total_filhos += filhos;

        if(salario > maior_salario){
            maior_salario = salario;
        }
        if(salario < 100){
            cont_salario_100 ++;
        }
        printf("\n----------------------------------------------------------------------");
        printf("\nInforme um valor neativo para encerrar ou um positivo para continuar: \n-->");
        scanf("%f", &salario);


    }while(salario > 0);

    media_salario = total_salario/ pessoas;
    media_filhos = (float) total_filhos/ pessoas;
    percentual_pessoas= (float) cont_salario_100 /pessoas * 100;

    printf("\n----------------------------------------------------------------------");
    printf("\nMedia do salario da populacao: %.2f", media_salario);
    printf("\nMedia do numero de filhos da populacao: %.2f", media_filhos);
    printf("\nMaior salario informado: %.2f", maior_salario);
    printf("\nPercentual de pessoas com o salario ate R$100.00: %.2f %%", percentual_pessoas);
}