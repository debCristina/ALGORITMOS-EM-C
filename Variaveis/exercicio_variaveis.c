#include<stdio.h>

main(){
    /*Passo 1 - alocar endereco de memoria para armazenamento de informações*/
    char nome[50];
    int idade;
    char endereco[100];
    char matricula[16];
    char curso[50];
    char periodo[10];
    char disciplinas[50];
    float mensalidade;

    /*Receber as informações e armazena-las*/
    printf("___________________");
    printf("Cadastro de aluno");
    printf("___________________");

    printf("\n Nome: ");
    fgets(nome, 50, stdin);
    fflush(stdin);

    printf("\n Idade: ");
    scanf("%d", &idade);
    fflush(stdin);

    printf("\n Matricula: ");
    fgets(matricula, 16, stdin);
    fflush(stdin);

    printf("\n Endereco: ");
    fgets(endereco, 100, stdin);
    fflush(stdin);

    printf("\n Curso: ");
    fgets(curso, 50, stdin);
    fflush(stdin);

    printf("\n Periodo: ");
    fgets(periodo, 10, stdin);
    fflush(stdin);

    printf("\n Disciplinas: ");
    fgets(disciplinas, 50, stdin);
    fflush(stdin);

    printf("\n Mensalidade:");
    scanf("%f", &mensalidade);
    fflush(stdin);

    /*Apresentar dos dados, ou seja, recuperações das informações armazenadas nos endereços de memoria*/
    printf("\n_______Dados cadastrados_______\n");

    printf("\n Nome: %s", nome);
    printf("\n Idade: %d\n", idade);
    printf("\n Matricula: %s", matricula);
    printf("\n Endereco: %s", endereco);
    printf("\n Curso: %s", curso);
    printf("\n Periodo: %s", periodo);
    printf("\n Disciplinas:%s", disciplinas);
    printf("\n Mensalidade: %f", mensalidade);

}