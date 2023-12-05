#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define TAM 1000
    /*Implemente um algoritmo que:
    Inclua até 1000 usuários;
    Edite um usuário;
    Exclua um usuário;
    Busque um usuário pelo e-mail;
    Imprima todos os usuários cadastrados;
    Obrigatório uso de struct, vetor e função. 
    Obrigatório uso de switch case com char para escolha da opção desejada.
    Dados do usuário:
    Id (int) => preenchido automaticamente por números randômicos e não podem ser repetir.
    Nome completo (string)
    Email (string) => validação do campo: verificar se o caractere "@" aparece
    Sexo (string) => validação do campo: aceitar somente as palavras Feminino, Masculino e Indiferente.
    Endereço (string)
    Altura (double) => validação do campo: aceitar valores entre 1 e 2 m.
    Vacina (int) => validação de 1 para sim e 0 para não */
typedef struct{
    char nome[50];
    char email[20];
    char sexo[15];
    char endereco[50];
    double altura;
    int vacina;
    int id;
}Usuario;

void flush_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void cadastrar(Usuario uso[], int indice){
    int achou = 0;
    int achouS = 0;
    srand(time(NULL));
    uso[indice].id = rand() %100;
    printf("\n\n----------CADASTRO----------");
    printf("\nDigite o nome: ");
    fgets(uso[indice].nome, sizeof(uso[indice].nome), stdin);
    fflush(stdin);

    do{
        printf("\nDigite o email: ");
        fgets(uso[indice].email, sizeof(uso[indice].email), stdin);
        fflush(stdin);


        if(strchr(uso[indice].email, '@') == NULL){
            printf("Email invalido, tente novamente");
            achou = 0;
        }else{
            achou = 1;
        }
    }while(achou == 0);

    do{
        printf("\nDigite o sexo (Masculino/Feminino/Indiferente): ");
        scanf(" %s", &uso[indice].sexo);
        fflush(stdin);

        if(strcmp(uso[indice].sexo, "Masculino") == 0 || strcmp(uso[indice].sexo, "Feminino") == 0 || strcmp(uso[indice].sexo, "Indiferente") == 0){
            achouS = 1;
        }else{
            printf("Sexo invalido, tente novamente");
            achouS = 0;
        }
    }while(achouS == 0 );

    printf("\nDigite o endereco: ");
    fgets(uso[indice].endereco, sizeof(uso[indice].endereco), stdin);
    fflush(stdin);

    do{
        printf("\nDigite a altura: ");
        scanf("%lf", &uso[indice].altura);
        fflush(stdin);

        if(uso[indice].altura < 1.00 || uso[indice].altura > 2.00){
            printf("Altura invalida, digite novamente");
             achou = 0;
        }else{
            achou = 1;
        }
    }while(achou == 0);

    do{
        printf("\nVacina: [1] Sim [0] Nao: ");
        scanf("%d", &uso[indice].vacina);
        fflush(stdin);
        if(uso[indice].vacina < 0 || uso[indice].vacina > 1){
            printf("Vacina invalida, digite novamente");
             achou = 0;
        }else{
            achou = 1;
        }
    }while(achou == 0);

    printf("\n--CADASTRO COMPLETO--");
}

void imprimir_lista(Usuario uso[], int total_cadastrados){
    for(int i = 0; i < total_cadastrados; i++){
        printf("\nId: %d", uso[i].id);
        printf("\nNome: %s", uso[i].nome);
        printf("Email: %s", uso[i].email);
        printf("Sexo: %s", uso[i].sexo);
        printf("\nEndereco: %s", uso[i].endereco);
        printf("Altura: %.2lf", uso[i].altura);
        if(uso[i].vacina == 0){
            printf("\nVacina: Nao");
        }else{
            printf("\nVacina: Sim");
        }

        printf("\n\n");
    }
    printf("--FIM DA LISTA--");
}

void buscar(Usuario uso[], int total_cadastrados, char busca_email[]){
    printf("\n--Resultado da busca--");
    if(total_cadastrados == 0){
        printf("\nNenhum id cadastrado");
        return;
    }else{
        for(int i = 0; i < total_cadastrados; i++){
            if(strcmp(uso[i].email, busca_email)==0){
                printf("\nId: %d", uso[i].id);
                printf("\nNome: %s", uso[i].nome);
                printf("Email: %s", uso[i].email);
                printf("Sexo: %s", uso[i].sexo);
                printf("\nEndereco: %s", uso[i].endereco);
                printf("Altura: %.2lf", uso[i].altura);
               if(uso[i].vacina == 0){
                    printf("\nVacina: Nao");
                }else{
                    printf("\nVacina: Sim");
                }
                return;
            }
        }
    }
    printf("\n**EMAIL NAO IDENTIFICADO**");
}
void alterar(Usuario uso[], int total_cadastrados, int id){
    int achou_usuario = 0;
    int achou = 0;
    int escolha;
    if(total_cadastrados == 0){
        printf("\nNenhum id cadastrado");
        return;
    }else{
        for(int i = 0; i < total_cadastrados; i++){
            if(uso[i].id == id){
                achou_usuario = 1;
                // achei na lista
                do{
                    printf("\n\nOPCOES DE ALTERACAO");
                    printf("\n[1] Alterar nome");
                    printf("\n[2] Alterar email");
                    printf("\n[3] Alterar sexo");
                    printf("\n[4] Alterar endereco");
                    printf("\n[5] Alterar altura");
                    printf("\n[6] Alterar vacina");
                    printf("\n[7] Alterar tudo");
                    printf("\nDigite a opcao: ");
                    scanf("%d", &escolha);
                    fflush(stdin);

                    switch (escolha){
                        case 1:
                            printf("\n Alterar nome: ");
                            fgets(uso[i].nome, sizeof(uso[i].nome), stdin);
                            fflush(stdin);
                            break;
                        case 2:
                            do{
                                printf("\nDigite o email: ");
                                fgets(uso[i].email, sizeof(uso[i].email), stdin);
                                fflush(stdin);

                                if(strchr(uso[i].email, '@') == NULL){
                                    printf("Email invalido, tente novamente");
                                    achou = 0;
                                }else{
                                    achou = 1;
                                }
                            }while(achou == 0);
                            break;
                        case 3: 
                            do{
                                printf("\nDigite o sexo (Masculino/Feminino/Indiferente): ");
                                scanf(" %s", &uso[i].sexo);
                                fflush(stdin);

                                if(strcmp(uso[i].sexo, "Masculino") == 0 || strcmp(uso[i].sexo, "Feminino") == 0 || strcmp(uso[i].sexo, "Indiferente") == 0){
                                    achou = 1;
                                }else{

                                     printf("Sexo invalido, tente novamente");
                                    achou = 0;
                                }
                            }while(achou == 0 );
                            break;
                        case 4: 
                            printf("\nDigite o endereco: ");
                            fgets(uso[i].endereco, sizeof(uso[i].endereco), stdin);
                            fflush(stdin);
                            break;
                        case 5:
                            do{
                                printf("\nDigite a altura: ");
                                scanf("%lf", &uso[i].altura);
                                fflush(stdin);

                                if(uso[i].altura < 1.00 || uso[i].altura > 2.00){
                                    printf("Altura invalida, digite novamente");
                                    achou = 0;
                                }else{
                                    achou = 1;
                                }
                            }while(achou == 0);
                            break;
                        case 6:
                            do{
                                printf("\nVacina: [1] Sim [0] Nao: ");
                                scanf("%d", &uso[i].vacina);
                                fflush(stdin);
                                if(uso[i].vacina < 0 || uso[i].vacina > 1){
                                    printf("Vacina invalida, digite novamente");
                                    achou = 0;
                                }else{
                                    achou = 1;
                                }
                            }while(achou == 0);
                            break;
                        case 7:
                            printf("\nDigite o nome: ");
                            fgets(uso[i].nome, sizeof(uso[i].nome),stdin);
                            fflush(stdin);
                            do{
                                printf("\nDigite o email: ");
                                fgets(uso[i].email, sizeof(uso[i].email), stdin);
                                fflush(stdin);

                                if(strchr(uso[i].email, '@') == NULL){
                                    printf("Email invalido, tente novamente");
                                    achou = 0;
                                }else{
                                    achou = 1;
                                }
                            }while(achou == 0);

                            do{
                                printf("\nDigite o sexo (Masculino/Feminino/Indiferente): ");
                                scanf(" %s", &uso[i].sexo);
                                fflush(stdin);

                                if(strcmp(uso[i].sexo, "Masculino") == 0 || strcmp(uso[i].sexo, "Feminino") == 0 || strcmp(uso[i].sexo, "Indiferente") == 0){
                                    achou = 1;
                                }else{
                                    printf("Sexo invalido, tente novamente");
                                    achou = 0;
                                }
                            }while(achou == 0 );

                            printf("\nDigite o endereco: ");
                            fgets(uso[i].endereco, sizeof(uso[i].endereco), stdin);
                            fflush(stdin);

                            do{
                                printf("\nDigite a altura: ");
                                scanf("%lf", &uso[i].altura);
                                fflush(stdin);

                                if(uso[i].altura < 1.00 || uso[i].altura > 2.00){
                                    printf("Altura invalida, digite novamente");
                                    achou = 0;
                                }else{
                                    achou = 1;
                                }
                            }while(achou == 0);

                            do{
                                printf("\nVacina: [1] Sim [0] Nao: ");
                                scanf("%d", &uso[i].vacina);
                                fflush(stdin);
                                if(uso[i].vacina < 0 || uso[i].vacina > 1){
                                    printf("Vacina invalida, digite novamente");
                                    achou = 0;
                                }else{
                                    achou = 1;
                                }
                            }while(achou == 0);
                            break;
                        default:
                            printf("\n**OPCAO INVALIDA, TENTE NOVAMENTE**");
                            break;
                    } 
                }while(escolha < 1 || escolha > 7);
                printf("\n**ALTERADO COM SUCESSO**");
            }
        }   
    }
    if (achou_usuario != 1) {
        printf("\n**ID NAO IDENTIFICADO**");
    }
}
void excluir(Usuario uso[], int *total_cadastrados, int id) {
    if (*total_cadastrados == 0) {
        printf("\nNenhum usuário cadastrado.\n");
        return;
    }

    int encontrado = 0;
    for (int i = 0; i < *total_cadastrados; i++) {
        if (uso[i].id == id) {
            encontrado = 1;
            // Remover o usuário movendo todos os usuários subsequentes uma posição para trás
            for (int j = i; j < *total_cadastrados - 1; j++) {
                uso[j] = uso[j + 1];
            }
            (*total_cadastrados)--;
            printf("Usuario com ID %d excluido com sucesso.\n", id);
            return; 
        }
    }

    if (encontrado != 1) {
        printf("ID nao encontrado. Nenhum usuario excluido.\n");
    }
}

main(){
    Usuario uso[TAM];
    int opcao, total_cadastros=0, busca_id;
    char busca_email[20];

    do{
        printf("\n\n========================");
        printf("\n          MENU          ");
        printf("\n========================");
        printf("\n[1] Cadastrar");
        printf("\n[2] Imprimir usuarios");
        printf("\n[3] Buscar usuario");
        printf("\n[4] Alterar dados");
        printf("\n[5] Excluir usuario");
        printf("\n[0] Sair");
        printf("\nDigite a opcao: ");
        scanf("%d", &opcao);
        fflush(stdin);

        switch(opcao){
            case 1:
                if(total_cadastros < TAM){
                    cadastrar(uso, total_cadastros);
                    total_cadastros++;
                }else{
                    printf("\n**LIMITE DE CADASTROS ATINGIDO**");
                }
                break;
             case 2:
                if(total_cadastros == 0){
                    printf("\n\nNao existem pessoas na lista");
                }else{
                    printf("\n\n---LISTA DE CADASTROS---");
                    imprimir_lista(uso, total_cadastros);
                }
                 break;
            case 3:
                printf("\n-------CAMPO DE BUSCA-------");
                printf("\nInforme o email para buscar: ");
                fgets(busca_email, sizeof(busca_email), stdin);
                fflush(stdin);
                buscar(uso, total_cadastros, busca_email);
                break;
            case 4:
                printf("\n--ALTERACAO DE DADOS--");
                printf("\nDigite um id para alterar: ");
                scanf("%d", &busca_id);
                fflush(stdin);
                alterar(uso, total_cadastros, busca_id);
                break;
            case 5:
                printf("\n---EXCLUIR USUARIO---");
                printf("\nDigite o id para excluir: ");
                scanf("%d", &busca_id);
                fflush(stdin);
                excluir(uso, &total_cadastros, busca_id);
                break;
            default:
                printf("\n**SISTEMA ENCERRADO**");
                break;
        }
    
    }while(opcao != 0);
}