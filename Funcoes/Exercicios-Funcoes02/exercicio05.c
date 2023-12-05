#include<stdio.h>

// 5. Faça uma função que recebe a idade de uma pessoa em apresente sua idade expressa em dias, meses e anos.
// funcao para determinar toal de dias do mes

int dia_no_mes(int mes){
    int dias_mes[12]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return dias_mes[mes - 1];
}

void calcular_idade(int dia_nascimento, int mes_nascimento, int ano_nascimento, int ano, int mes, int dia){
    int anos, dias, meses;
    if(dia >= dia_nascimento){
        dias = dia - dia_nascimento;
    }else{
        dias = dia + dia_no_mes(mes_nascimento) - dia_nascimento;
        mes--;
    }
    if(mes >= mes_nascimento){
        meses= mes - mes_nascimento;
    }else{
        meses = mes + 12 - mes_nascimento;
        ano--;
    }
    anos = ano - ano_nascimento;

    printf("Idade: %d anos, %d meses, %d dias", anos, meses, dias);

}
main(){
    int dia, ano, mes;
    int dia_nascimento, mes_nascimento, ano_nascimento;

    printf("Digite a data de nascimento (dd mm aa): ");
    scanf("%d %d %d", &dia_nascimento, &mes_nascimento, &ano_nascimento);

    printf("Digite a data atual (dd mm aa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    // chamar a funcao

    calcular_idade(dia_nascimento, mes_nascimento, ano_nascimento, ano, mes, dia);
}