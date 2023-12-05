#include<stdio.h>

main(){

    /*Faça um algoritmo que leia as três notas de 30 alunos de uma turma. Para cada aluno, calcule a média ponderada, como segue: MP = ( n1*2 + n2*4 + n3*3 ) / 10 */

    int contador;
    float nota1, nota2, nota3, media_p, media_turma, media_geral;
    char aluno[30];
    

    for(contador = 1; contador < 30; contador++){
        printf("\n-----------------");
        printf("\nNome do auno: ");
        fgets(aluno, 30, stdin);
        fflush(stdin);
        printf("\nPrimeira nota: ");
        scanf("%f", &nota1);
        fflush(stdin);
        printf("Segunda nota: ");
        scanf("%f", &nota2);
        fflush(stdin);
        printf("Terceira nota: ");
        scanf("%f", &nota3);
        fflush(stdin);

        media_p= (nota1*2 + nota2*4 + nota3*3) / 10;

        if(media_p >= 7.0){
            printf("Media de %s: %.2f Aprovado", aluno, media_p);
        }else{
            printf("Media de %s: %.2f Reprovado",aluno, media_p);
        }

        media_turma =+ media_p;
    }
    media_geral= media_turma / 30;
    printf("Media geral: %f", media_geral);
}