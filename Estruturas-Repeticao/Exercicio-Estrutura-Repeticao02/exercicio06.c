#include<stdio.h>

main(){

    /*6) Desenvolver um algoritmo que solicita o usuário um determinado um mês/ano, determinar e exibir o número de dias do mês/ano digitado. Considerar a existência de anos bissextos: (ano % 4 = 0 e ano % 100 =/= 0) ou ano % 400 = 0. Ao final do programa deve ser impressa a seguinte mensagem: VOCÊ DESEJA OUTRAS ENTRADAS (S/?)? Se a resposta for S o programa deverá retornar ao começo, caso contrário (qualquer outro caractere) deverá encerrar a sua execução. */
    
    int mes, ano, dias;
    char opcao;

    do{
        printf("Digite um mes [1 a 12]: ");
        scanf("%d", &mes);

        printf("Digite um ano: ");
        scanf("%d", &ano);
        fflush(stdin);
        
        if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
            switch (mes){
                case 2:
                    dias = 29;
                    break;
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    dias = 31;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    dias = 31;
                
                default:
                printf("O mes informado nao corresponde a um valor valido");
                    break;
            }
        }else{
            switch (mes){
                case 2:
                    dias = 28;
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    dias = 31;
                    break;
                case 4:
                case 6: 
                case 9:
                case 11:
                    dias = 30;
                    break;
            default:
                printf("O mes informado nao corresponde a um valor valido");
                break;
            }
        }
        printf("VOCE DESEJA OUTRAS ENTRADAS(S/?)");
        scanf("%c", &opcao);

    }while(opcao == 'S');

    printf("Numero de dias: %d", dias);

}