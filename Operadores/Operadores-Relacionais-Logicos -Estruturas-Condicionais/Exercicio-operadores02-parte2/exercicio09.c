#include<stdio.h>

main(){

    /*
        9. Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salario atual e o tempo de serviço de cada funcionário. Os funcionários com menor salario terão um aumento proporcionalmente maior do que os funcionários  com um salario maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de salário. Faça um programa que leia:
        • o valor do salario atual do funcionário; 
        • o tempo de serviço desse funcionário na empresa (número de anos de trabalho na empresa).
    */

    float salario_atual, novo_salario, reajuste;
    int tempo_servico, bonus;

    printf("Salario atual: ");
    scanf("%f", &salario_atual);

    printf("Anos de servico: ");
    scanf("%d", &tempo_servico);

    if(salario_atual <= 500){
        reajuste = salario_atual * 25 / 100 ;
        if (tempo_servico < 1){
            bonus = 0;
        }else if (tempo_servico >= 1 && tempo_servico <= 3){
            bonus = 100;
        }else if(tempo_servico > 3 && tempo_servico <= 6){
            bonus = 200;
        }else if(tempo_servico > 6 && tempo_servico <= 10){
            bonus = 300;
        }else{
            bonus = 500;
        }
        novo_salario = salario_atual + reajuste + bonus;
        printf("Salario reaustado: R$%.2f", novo_salario);

    }else if(salario_atual > 500 && salario_atual <=1000){
        reajuste = salario_atual * 20 /100;
         if (tempo_servico < 1){
            bonus = 0;
        }else if (tempo_servico >= 1 && tempo_servico <= 3){
            bonus = 100;
        }else if(tempo_servico > 3 && tempo_servico <= 6){
            bonus = 200;
        }else if(tempo_servico > 6 && tempo_servico <= 10){
            bonus = 300;
        }else{
            bonus = 500;
        }
        novo_salario = salario_atual + reajuste + bonus;
        printf("Salario reaustado: R$%.2f", novo_salario);

    }else if(salario_atual > 1000 && salario_atual <= 15000){
        reajuste = salario_atual * 15 / 100;
         if (tempo_servico < 1){
            bonus = 0;
        }else if (tempo_servico >= 1 && tempo_servico <= 3){
            bonus = 100;
        }else if(tempo_servico > 3 && tempo_servico <= 6){
            bonus = 200;
        }else if(tempo_servico > 6 && tempo_servico <= 10){
            bonus = 300;
        }else{
            bonus = 500;
        }
        novo_salario = salario_atual + reajuste + bonus;
        printf("Salario reaustado: R$%.2f", novo_salario);
       
    }else if(salario_atual > 1500 && salario_atual <=2000){
        reajuste = salario_atual * 10 / 100;
         if (tempo_servico < 1){
            bonus = 0;
        }else if (tempo_servico >= 1 && tempo_servico <= 3){
            bonus = 100;
        }else if(tempo_servico > 3 && tempo_servico <= 6){
            bonus = 200;
        }else if(tempo_servico > 6 && tempo_servico <= 10){
            bonus = 300;
        }else{
            bonus = 500;
        }
        novo_salario = salario_atual + reajuste + bonus;
        printf("Salario reaustado: R$%.2f", novo_salario);
      
    }else if(salario_atual > 2000 && tempo_servico > 10){
        reajuste = 0;
         if (tempo_servico < 1){
            bonus = 0;
        }else if (tempo_servico >= 1 && tempo_servico <= 3){
            bonus = 100;
        }else if(tempo_servico > 3 && tempo_servico <= 6){
            bonus = 200;
        }else if(tempo_servico > 6 && tempo_servico <= 10){
            bonus = 300;
        }else{
            bonus = 500;
        }
        novo_salario = salario_atual + reajuste + bonus;
        printf("Salario reaustado: R$%.2f", novo_salario);

    }else{
        printf("Voce nao tem direito a nenhum aumento");
    }
}
