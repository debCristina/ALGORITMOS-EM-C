#include<stdio.h>
#include<string.h>

// prototipo da funcao

void mostrar_mes();
int entrada_mes();

main(){
 
    mostrar_mes();
    
}

int entrada_mes(){
    int numero;

    printf("Digite um numero correspondente a um mes: ");
    scanf("%d", &numero);
    return numero;
}

// implementar a função
void mostrar_mes(){
    int num = entrada_mes();
    char nome_mes[20];
    int dias_mes=0;

    switch (num){
        case 1: case 3: case 5:  case 7: case 8: case 10: case 12:
        dias_mes = 31;

        if(num == 1 ){
            strcpy(nome_mes, "Janeiro");
        }else if(num == 3){
            strcpy(nome_mes, "Marco");
        }else if(num == 5){
            strcpy(nome_mes, "Maio");
        }else if(num == 7){
            strcpy(nome_mes, "Julho");
        }else if(num == 8){
            strcpy(nome_mes, "Agosto");
        }else if(num == 10){
            strcpy(nome_mes, "Outubro");
        }else{
             strcpy(nome_mes, "Dezembro");
        }
        break;

        case 4: case 6: case 9: case 11:
        dias_mes=30;
         if(num == 4 ){
            strcpy(nome_mes, "Abril");
        }else if(num == 6){
            strcpy(nome_mes, "Junho");
        }else if(num == 9){
            strcpy(nome_mes, "Setembro");
        }else{
             strcpy(nome_mes, "Novembro");
        }
        break;

        case 2:
            dias_mes=28;
            strcpy(nome_mes, "Fvereiro");
            break;
        
        default:
            printf("Valor invalido");

    }

    printf("total de dias: %d, mes correspondente %s", dias_mes, nome_mes);
}