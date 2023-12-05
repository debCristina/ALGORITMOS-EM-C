#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct{
    int codigo;
    int quantidade;
    float preco;
    char descricao[100];
    struct Produto *prox;


}Produto;

// funcao que cria a lista vazia
Produto* criar_lista_vazia(){
    return NULL;
}

Produto* criar_produto(){
    Produto *novo_produto = (Produto*)malloc(sizeof(Produto));
    if(novo_produto == NULL){
        // memoria insuficiente
        printf("Erro de alocacao");
        exit(EXIT_FAILURE);
    }

    novo_produto->prox=NULL;
    return novo_produto; //endereco de memoria alocado para nova pessoa 
}

Produto* cadastrar_produto(Produto *lista){
    Produto *novo_produto = criar_produto();
    // inserir informacoes
    printf("\nCodigo do produto: ");
    scanf("%d", &novo_produto ->codigo);
    fflush(stdin);

    printf("Descricao: ");
    fgets(novo_produto -> descricao, sizeof(novo_produto -> descricao), stdin);
    fflush(stdin);

    printf("Quantidade: ");
    scanf("%d", &novo_produto -> quantidade);
    fflush(stdin);

    printf("Valor: ");
    scanf("%f", &novo_produto -> preco);
    fflush(stdin);
    // duas situacoes 1-lista vazia 2-ja tem alguem a lista
    if(lista == NULL){
        return novo_produto;
    }else{
        // percorrer a lista ate encontrar o produt que aponta para NULL
        // criar ponteiro auxiliar que aponta para cada produto na lista durante a repeticao
        Produto *atual = lista;
        while(atual->prox != NULL){
            atual = atual ->prox;
        }
        atual->prox = novo_produto;
        return lista;
    }
}

void gerar_relatorio(Produto *lista){
    if(lista == NULL){
        printf("\n**NENHUM PRODUTO CADASTRADO**");
        return;
    }else{
        Produto *atual = lista;
        while (atual != NULL){
            printf("\n\nCodigo: %d", atual ->codigo);
            printf("\nDescricao: %s", atual ->descricao);
            printf("Quantidade: %d", atual -> quantidade);
            printf("\nValor do produto: %.2f", atual -> preco);
            atual = atual ->prox;
        }
        printf("\n\n--FIM DO RELATORIO--");
    }
}

Produto* consultar_produto(Produto *lista, int codigo_busca){
    printf("\n--RESULTADO DA CONSULTA--");
    if(lista == NULL){
        printf("\n**NENHUM PRODUTO CADASTRADO**");
        return;
    }else{
        Produto *atual = lista;
        while (atual != NULL){
            if(atual->codigo == codigo_busca){
                printf("\nCodigo: %d", atual ->codigo);
                printf("\nDescricao: %s", atual ->descricao);
                printf("Quantidade: %d", atual -> quantidade);
                printf("\nValor do produto: %.2f", atual -> preco);

                printf("\n\n**BUSCA FINALIZADA**");
                return atual;
            }
            atual = atual -> prox;
        }
        printf("\n**PRODUTO NAO ENCONTRADO**");
        return NULL;
    }
}

Produto* excluir(Produto *lista, int codigo_busca){
    Produto *anterior = NULL;
    Produto *atual = lista;

    while(atual != NULL && atual ->codigo != codigo_busca){
        anterior = atual;
        atual = atual -> prox;
    }
    if(atual != NULL){
        // LOGICA DE EXCLUSAO
        if(anterior != NULL ){
            // excluir alguem que nao esta no inicio da lista
            anterior -> prox = atual -> prox;
        }else{
            // excluir o primeiro da lista
            lista = atual -> prox;
        }
        free (atual); //libera o endereco alocado
        printf("\n**EXCLUIDO COM SUCESSO**");
    }else{
        printf("\n**PRODUTO NAO ENCONTRADO**");
    }
    return lista;
}

void liberar_lista(Produto *lista){
    Produto *atual = lista;
    Produto *prox_produto;

    while(atual != NULL){
        prox_produto = atual->prox;
        free(atual);
        atual = prox_produto;
    }
}


main(){
    int opcao, codigo_busca;
    Produto *lista = criar_lista_vazia();
    Produto *produto_encontrado;

    do{
        do{
            printf("\n\n=========================");
            printf("\n|         MENU          |");
            printf("\n=========================");
            printf("\n|[1] Cadastrar produto  |");
            printf("\n|[2] Gerar relatorio    |");
            printf("\n|[3] Consultar produto  |");
            printf("\n|[4] Remover produto    |");
            printf("\n|[0] Sair               |");
            printf("\n=========================");
            printf("\n Digite a opcao: ");
            scanf("%d", &opcao);
            fflush(stdin);

            if(opcao < 0 || opcao > 4){
                printf("\n**OPCAO INVALIDA, TENTE NOVAMENTE**");
            }
        }while(opcao <0 || opcao > 4);

        switch(opcao){
            case 1:
                printf("\n--CADASTRO DE PRODUTOS--");
                lista = cadastrar_produto(lista);
            break;
            case 2:
                printf("\n--RELATORIO DE PRODUTOS--");
                gerar_relatorio(lista);
            break;
            case 3:
                printf("\n--CAMPO DE CONSULTA--");
                printf("\nDigite o codigo para buscar: ");
                scanf("%d", &codigo_busca);
                produto_encontrado = consultar_produto(lista, codigo_busca);
            break;
            case 4:
                printf("\n--EXCLUIR USUARIO--");
                printf("\nDigite o codigo para excluir: ");
                scanf("%d", &codigo_busca);
                lista = excluir(lista, codigo_busca);
            break;
         }

    }while(opcao != 0);
}