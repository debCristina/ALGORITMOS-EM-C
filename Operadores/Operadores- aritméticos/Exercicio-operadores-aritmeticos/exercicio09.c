#include<stdio.h>

main(){
    /*9. O custo de um carro novo ao consumidor é a soma do custo de fábrica com a
    porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo
    que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um
    algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor*/

    //declarar variaveis
    float custo_fabrica, custo_final, valor_distribuidor, impostos;

    //receber os valores 
    printf("Custo de fabrica do veiculo: ");
    scanf("%f", &custo_fabrica);

    //realizar as operações
    valor_distribuidor= custo_fabrica * 28 / 100;
    impostos =  custo_fabrica * 45 / 100;
    custo_final = custo_fabrica + valor_distribuidor + impostos;

    //mostrar o custo final
    printf("\nO valor final do produto sera de: R$ %.2f", custo_final);
}
