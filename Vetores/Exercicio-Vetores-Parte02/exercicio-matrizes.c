#include<stdio.h>

main(){

    char nome_aluno[3][60];
    float notas[3][3];
    float media_aluno_A=0, media_aluno_B=0, media_aluno_C=0;
    float soma;


    for(int i = 0; i < 3; i++){
        soma = 0;

        printf("\nNome do aluno: ");
        fgets(nome_aluno[i], 60, stdin);
        fflush(stdin);

        for(int j = 0; j < 3; j++){
            printf("Digite a %d nota de %s -->",j+1, nome_aluno[i]);
            scanf("%f", &notas[i][j]);
            fflush(stdin);
            soma += notas[i][j];
        }
        if(i == 0){
            media_aluno_A = soma / 3;
        }else if(i == 1){
            media_aluno_B = soma / 3;
        }else{
            media_aluno_C = soma / 3;
        }
    }

    printf("\nMedia de %s: %f", nome_aluno[0], media_aluno_A);
    printf("\nMedia de %s: %f", nome_aluno[1], media_aluno_B);
    printf("\nMedia de %s: %f", nome_aluno[2], media_aluno_C);
}
    
    