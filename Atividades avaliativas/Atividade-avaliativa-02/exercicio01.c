#include<stdio.h>

int valida_quantidade(){
    int qtd_pecas;
    do{
        printf("Informe o numero de pecas fabricadas: ");
        scanf("%d", &qtd_pecas);
        if(qtd_pecas < 0){
            printf("Valor invalido, por favor forneca um valor maior ou igual a 0");
        }
    }while(qtd_pecas < 0);

    return qtd_pecas;
}

float calcula_salario(int qtd_pecas){
    float salario_base = 600.0;
    float salario_final;
    float adicional_produtividade;
    int qtd_minimo = 50;
    int qtd_max = 80; 

    if(qtd_pecas <= qtd_minimo){
        adicional_produtividade = 0;
        salario_final = salario_base;
    }else if(qtd_pecas > qtd_minimo && qtd_pecas <= qtd_max){
        adicional_produtividade = (qtd_pecas - qtd_minimo) * 0.50;
        salario_final = salario_base + adicional_produtividade;
    }else{
        adicional_produtividade = ((qtd_max - qtd_minimo) * 0.50) + ((qtd_pecas - qtd_max) * 0.75);
        salario_final = salario_base + adicional_produtividade;
    }

    return salario_final;

}
void mostra_final(float salario_final){
    printf("O seu salario final e de R$ %.2f", salario_final);

}
main(){
    int opcao=1;

    do{
        int qtd_pecas = valida_quantidade();
        float salario = calcula_salario(qtd_pecas);
        mostra_final(salario);
        printf("\n\nDeseja calcular outro salario [1] Sim [2] Nao \n-->");
        scanf("%d", &opcao);

    }while(opcao != 2);

        
}
