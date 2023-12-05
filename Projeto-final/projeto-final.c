#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

typedef struct{
    char proprietario[30];
    char combustivel[10];
    char modelo[20];
    char cor[20];
    char chassi[20];
    int ano;
    char placa[8];
    struct Veiculo *prox;
}Veiculo;

Veiculo* criar_veiculo(){
    Veiculo *novo_veiculo = (Veiculo*)malloc(sizeof(Veiculo));
    if(novo_veiculo == NULL){
        // memoria insuficiente
        printf("Erro de alocacao");
        exit(EXIT_FAILURE);
    }

    novo_veiculo->prox=NULL;
    return novo_veiculo; //endereco de memoria alocado para nova pessoa 
}

Veiculo* cadastrar_veiculo(Veiculo *lista){
    Veiculo *novo_veiculo = criar_veiculo();
    int achou =0;
    int letras;
    int numeros;
    // inserir informacoes
    printf("\nProprietario do veiculo: ");
    fgets(novo_veiculo->proprietario, sizeof(novo_veiculo->proprietario), stdin);
    fflush(stdin);

    do{
        printf("\nCombustivel (Alcool/Diesel/Gasolina): ");
        scanf("%s", &novo_veiculo->combustivel);
        fflush(stdin);

        if(strcmp(novo_veiculo->combustivel, "Alcool") == 0 || strcmp(novo_veiculo->combustivel, "Diesel") == 0 || strcmp(novo_veiculo->combustivel, "Gasolina") == 0){
            achou = 1;
        }else{
            printf("\n**Combustivel invalido, tente novamente**");
            achou = 0;
        }
    }while(achou == 0 );

    printf("\nModelo: ");
    fgets(novo_veiculo->modelo, sizeof(novo_veiculo->modelo), stdin);
    fflush(stdin);

    printf("\nCor: ");
    fgets(novo_veiculo->cor, sizeof(novo_veiculo->cor), stdin);
    fflush(stdin);

    printf("\nNumero do chassi: ");
    scanf("%s", novo_veiculo->chassi);
    fflush(stdin);

    printf("\nAno: ");
    scanf("%d", &novo_veiculo->ano);
    fflush(stdin);
    do{
        printf("\nPlaca: ");
        fgets(novo_veiculo->placa, sizeof(novo_veiculo->placa), stdin);
        fflush(stdin);

        letras = isalpha(novo_veiculo->placa[0]) && isalpha(novo_veiculo->placa[1]) && isalpha(novo_veiculo->placa[2]);

        numeros = isdigit(novo_veiculo->placa[3]) && isdigit(novo_veiculo->placa[4]) && isdigit(novo_veiculo->placa[5]) && isdigit(novo_veiculo->placa[6]);
         if (!(letras && numeros && novo_veiculo->placa[8] == '\0')) {
            printf("\n**Placa invalida, tente novamente**");
        }

    } while (!( letras && numeros && novo_veiculo->placa[8] == '\0')); 
    // duas situacoes 1-lista vazia 2-ja tem alguem a lista
    if(lista == NULL){
        return novo_veiculo;
    }else{
        // percorrer a lista ate encontrar o produt que aponta para NULL
        // criar ponteiro auxiliar que aponta para cada produto na lista durante a repeticao
        Veiculo *atual = lista;
        while(atual->prox != NULL){
            atual = atual ->prox;
        }
        atual->prox = novo_veiculo;
        return lista;
    }
}

void listar_diesel_2010(Veiculo *lista){
    int encontrado=0;
    if(lista == NULL){
        printf("\n**NENHUM VEICULO CADASTRADO**");
        return;
    }else{
        Veiculo *atual = lista;
        while (atual != NULL){
            if(atual->ano >= 2010 && strcmp(atual->combustivel, "Diesel") == 0){
                printf("\n\nProprietario: %s", atual ->proprietario);
                printf("Combustivel: %s", atual ->combustivel);
                printf("\nModelo: %s", atual -> modelo);
                printf("Cor: %s", atual -> cor);
                printf("Numero do chassi: %s", atual->chassi);
                printf("\nAno: %d", atual->ano);
                printf("\nPlaca: %s", atual->placa);
                int encontrado=1;
            }
            atual = atual ->prox;
        }
        return;

    }
    if(encontrado == 0){
        printf("\n\n**Nao existe nenhum carro movido a diesel a partir de 2010**");
    }
}

void listar_placas_J(Veiculo *lista){
    int encontrado=0;
    if(lista == NULL){
        printf("NENHUM VEICULO CADASTRADO");
        return;
    }else{
        Veiculo *atual = lista;
        while (atual != NULL){
            if((tolower(atual->placa[0]) == 'j') && (atual->placa[6] == '0' ||  atual->placa[6] == '2' || atual->placa[6] == '4' || atual->placa[6] == '7')){
                printf("\n\nProprietario: %s", atual->proprietario);
                printf("Placa: %s", atual->placa);
                encontrado=1;
            }
            atual = atual ->prox;
        }

    }
    if(encontrado == 0){
        printf("\n\n**Nao existe nenhuma placa que comeca com J e termina com 0, 2, 4 ou 7**");
    }
}

void listar_veiculos_vogal_par(Veiculo *lista) {
    if (lista == NULL) {
        printf("\n**NENHUM VEICULO CADASTRADO**");
        return;
    }

    int encontrado = 0;
    Veiculo *atual = lista;
    while (atual != NULL) {
        char segunda_letra = tolower(atual->placa[1]);
        int soma = 0;

        for (int i = 2; i <= 6 && isdigit(atual->placa[i]); i++) {
            soma = soma * 10 + (atual->placa[i] - '0');
        }

        if (segunda_letra == 'a' || segunda_letra == 'e' || segunda_letra == 'i' || segunda_letra == 'o' || segunda_letra == 'u') {
            if (soma % 2 == 0) {
                printf("\n\nModelo: %s", atual->modelo);
                printf("Cor: %s", atual->cor);
                encontrado = 1;
            }
        }
        atual = atual->prox;
    }

    if (encontrado == 0) {
        printf("\n\n**Nao existe nenhum veiculo com placa vogal e soma dos numeros par.");
    }
}

void trocar_proprietario(Veiculo* lista, const char chassi_busca[]) {
    Veiculo* atual = lista;
    while (atual != NULL) {
        if (strcmp(atual->chassi, chassi_busca) == 0) {
            // Verificar se a placa não possui dígitos iguais a zero
            if (strchr(atual->placa, '0') == NULL) {
                printf("Informe o novo proprietario: ");
                fgets(atual->proprietario, sizeof(atual->proprietario), stdin);
                fflush(stdin);
                printf("\n\n**TROCA REALIZADA COM SUCESSO**");
                return;
            } else {
                printf("\n**A troca de proprietario para este veiculo nao e permitida**");
                return;
            }
        }
        atual = atual->prox;
    }

    printf("Veiculo com chassi %s nao encontrado.\n", chassi_busca);
}

void liberar_lista(Veiculo *lista){
    Veiculo *atual = lista;
    Veiculo *prox_veiculo;

    while(atual != NULL){
        prox_veiculo = atual->prox;
        free(atual);
        atual = prox_veiculo;
    }
}

main(){
    int opcao;
    char chassi_busca[20];
    Veiculo *lista = NULL;
    do{
        do{
            printf("\n\n=========================");
            printf("\n|         MENU          |");
            printf("\n=========================");
            printf("\n|[1] Cadastrar viculo   |");
            printf("\n|[2] Gerar relatorio    |");
            printf("\n|[3] Trocar proprietario|");
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
                printf("\n--CADASTRO DE VEICULOS--");
                lista = cadastrar_veiculo(lista);
            break;
            case 2:
                printf("\n--VEICULOS A PARTIR DE 2010 E MOVIDOS A DIESEL--");
                listar_diesel_2010(lista);
            
                printf("\n\n--PLACAS QUE COMECAM COM J E TERMINAM COM 0, 2, 4 OU 7--");
                listar_placas_J(lista);

                printf("\n\n--PLACAS COM A SEGUNDA LETRA VOGAL E SOMA DOS NUMEROS IGUAL A PAR--");
                listar_veiculos_vogal_par(lista);
                break;
            case 3:
                printf("\n\n-- TROCA DE PROPRIETARIO--");
                printf("\nInforme o numero do chassi para troca de proprietario: ");
                scanf("%s", chassi_busca);
                fflush(stdin);
                trocar_proprietario(lista, chassi_busca);
                break;
        }
    }while(opcao != 0);
        
    liberar_lista(lista);

}
