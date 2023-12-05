#include<stdio.h>

main(){
    
    char nome[50];
    int idade;
    char endereco[50];
    char matricula[15];
    char curso[20];
    char periodo[10];
    int disciplinas;

    printf("\nDigite o seu nome: ");
    fgets(nome, 50, stdin);

    printf("\nDigite a idade: ");
    scanf("%d", &idade);
    fflush(stdin);

    printf("\nDigite a matricula: ");
    fgets(matricula, 20, stdin);

    printf("\nDigite o endereco: ");
    fgets(endereco, 50, stdin);

    printf("\nDigite o curso: ");
    fgets(curso, 20, stdin);

    printf("\nDigite o periodo: ");
    fgets(periodo, 10, stdin);

    printf("\nDigite as disciplinas: ");
    scanf("%d", &disciplinas);

    printf("\nDados cadastrados: \n");
    printf("\nNome: %s", nome);
    printf("\nIdade: %d\n", idade);
    printf("\nMatricula: %s", matricula);
    printf("\nEndereço: %s", endereco);
    printf("\nCurso: %s", curso);
    printf("\nPeriodo: %s\n", periodo);
    printf("\nDisciplinas:%d", disciplinas);

}