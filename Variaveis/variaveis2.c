#include<stdio.h>

main(){

    char nome[50];
    int idade;
    char matricula[20];
    char endereco[50];
    char curso[20];
    char periodo[10];
    int disciplinas;

    printf("_________ CADASTRO ALUNO__________");
    printf("\nDigite seu nome: ");
    fgets(nome, 50, stdin);
    printf("\nO seu nome e: %s", nome);

    printf("\nDigite a sua idade:");
    scanf("%d", &idade);
    printf("\nA sua idade e: %d\n", idade);
    fflush(stdin);

    printf("\nDigite sua matricula: ");
    fgets(matricula, 20, stdin);
    printf("\nA sua matricula e: %s", matricula);

    printf("\nDigite o seu endereco: ");
    fgets(endereco, 50, stdin);
    printf("\nO seu endereco e: %s", endereco);

    printf("\nDigite o seu curso: ");
    fgets(curso, 20, stdin);
    printf("\nO seu cursoo e: %s", curso);

    printf("\nDigite o periodo: ");
    fgets(periodo, 10, stdin);
    printf("\nPeriodo: %s", periodo);

    printf("\nDigite os numeros de disciplinas: ");
    scanf("%d", &disciplinas);
    printf("\nDisciplinas: %d", disciplinas);


}
