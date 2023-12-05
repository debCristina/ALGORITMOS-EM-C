#include<stdio.h>

main(){

    int voto, opcao, total_votos_A=0, total_votos_B=0, total_votos_C=0, total_votos_D=0, total_votos_nulo=0,total_votos_branco=0;

    do{
        printf("Informe o seu voto");
        printf("[1] Candidato A \n");
        printf("[2] Candidato B \n");
        printf("[3] Candidato C \n");
        printf("[4] Candidato D \n");
        printf("[5] NULO \n");
        printf("[6] Voto em branco \n");
        printf("============\n");
        printf("VOTO --> ");
        scanf("%d", &voto);

        switch (voto){
        case 1:
            total_votos_A ++;
            break;
         case 2:
               total_votos_B ++;
            break;
        case 3:
           total_votos_C ++;
            break;
        case 4:
            total_votos_D ++;
            break;
        case 5:
            total_votos_nulo ++;
            break;
        case 6:
            total_votos_branco++;
            break;
        default:
            printf("Informacao nao encontrada");
            break;
        }

        printf("Deseja continuar a votacao: \n");
        printf("[1] Sim [0] Nao \n");
        printf("--> ");
        scanf("%d", &opcao);

    }while(opcao > 0);

    printf("Total de votos para A: %d \n", total_votos_A);
    printf("Total de votos para B: %d \n", total_votos_B);
    printf("Total de votos para C: %d \n", total_votos_C);
    printf("Total de votos para D: %d \n", total_votos_D);
    printf("Votos nulos: %d \n", total_votos_nulo);
    printf("Votos em branco: %d \n", total_votos_branco);
}