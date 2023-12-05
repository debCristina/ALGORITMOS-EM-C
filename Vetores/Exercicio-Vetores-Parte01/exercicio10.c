#include<stdio.h>
#define TAM 15

main(){

    float notas[TAM], media_geral,soma=0; 

    for(int i = 0; i <TAM; i++){
        printf("\nNota do aluno %d: ", notas);
        scanf("%f", &notas[i]);
        soma+= notas[i];
    }

    media_geral= soma / TAM;
    printf("Media Geral da turma: %.2f", media_geral);
}



