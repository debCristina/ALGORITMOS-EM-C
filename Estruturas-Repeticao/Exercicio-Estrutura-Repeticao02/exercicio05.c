#include <stdio.h>
#include <string.h>
#define MAX_ENTREVISTADOS 300
#define MIN_ENTREVISTADOS 3

typedef struct{
    char nome[50];
    int idade;
    char genero;
    int voto;
}Participantes;

int votos_jogadoras(){
    int opcao;
    printf("\nESCOLHA A MELHOR JOGADORA\n");
    printf("[1]:Sam Kerr - Australia\n");
    printf("[2]:Alex Morgan - Estados Unidos\n");
    printf("[3]:Dzsenifer Marozsan - Alemanha\n");
    printf("[4]:Amandine Henzy - França\n");
    printf("[5]:Marta Vieira - Brasil\n");
    printf("opcao:");
    scanf("%d", &opcao);

    return opcao;
}

main(){
    int entrevistados = 0;
    int opcao_continuar;
    Participantes p[300];

   do{
        /* Na pesquisa deverá ser solicitado o nome, idade (maior que 12 anos), sexo (masculino e feminino) da pessoa entrevistada e o voto*/
        fflush(stdin);
        printf("FORMULARIO\n");
        printf("Digite seu nome: ");
        fgets(p[entrevistados].nome, sizeof(p[entrevistados].nome), stdin);
        p[entrevistados].nome[strcspn(p[entrevistados].nome, "\n")] = '\0';

        do{
            printf("Digite sua idade:(maior que 12 anos) ");
            scanf("%d", &p[entrevistados].idade);
            fflush(stdin);

            if(p[entrevistados].idade < 12){
                printf("\nSua idade não atende aos criterios (menor ou igual a 12 anos).\n");
            }
        }while(p[entrevistados].idade < 12);
        
        do{
            printf("Digite seu genero (M para masculino e F para feminino):");
            scanf(" %c", &p[entrevistados].genero);
            fflush(stdin);

            if(p[entrevistados].genero != 'M' && p[entrevistados].genero != 'm' && p[entrevistados].genero != 'F' && p[entrevistados].genero != 'f'){

                printf("\nGenero nao reconhecido, tente novamente\n");
            }

        }while (p[entrevistados].genero != 'M' && p[entrevistados].genero != 'm' && p[entrevistados].genero != 'F' && p[entrevistados].genero != 'f');
            
        p[entrevistados].voto = votos_jogadoras();
        entrevistados++;

        // Verificar se atingiu o número mínimo de entrevistados
        if(entrevistados >= MIN_ENTREVISTADOS) {
            printf("\nDeseja incluir um novo entrevistado? [1] Sim [2] Nao: ");
            scanf("%d", &opcao_continuar);
            fflush(stdin);
        }else{
            printf("\nNumero minimo de entrevistados nao atingido. Continue coletando dados.\n");
            opcao_continuar = 1;  
        }

    } while (opcao_continuar == 1 && entrevistados < MAX_ENTREVISTADOS);

    int votos[5] = {0};
    int max_votos=0;

    printf("\nQuantidade de votos para cada jogadora:\n");
    for (int i = 0; i < entrevistados; i++) {
        votos[p[i].voto - 1]++;
    }

    for (int i = 0; i < 5; i++){
        printf("Jogadora %d: %d votos\n", i + 1, votos[i]);
        if (votos[i] > max_votos){
            max_votos = votos[i];
        }
    }

    printf("\nJogadoras mais votadas:\n");
    for (int i = 0; i < 5; i++){
        if(votos[i] == max_votos){
            printf("Jogadora %d com %d votos\n", i + 1, max_votos);
        }
    }

    printf("\n----Dados dos participantes----\n");
    printf("\n---Mulheres---\n");
    for(int i = 0; i < entrevistados; i++){
        if (p[i].genero == 'F' || p[i].genero == 'f') {
            printf("\nNome: %s, Idade: %d, Genero: %c, Voto: %d", p[i].nome, p[i].idade, p[i].genero, p[i].voto);
        }
    }

    printf("\n\n---Homens---\n");
    for(int i = 0; i < entrevistados; i++){
        if (p[i].genero == 'M' || p[i].genero == 'm'){
            printf("\nNome: %s, Idade: %d, Genero: %c, Voto: %d", p[i].nome, p[i].idade, p[i].genero, p[i].voto);
        }
    }

    printf("\n\n---Maiores de idade---\n");
    for(int i = 0; i < entrevistados; i++){
        if(p[i].idade >= 18){
            printf("\nNome: %s, Idade: %d, Genero: %c, Voto: %d", p[i].nome, p[i].idade, p[i].genero, p[i].voto);
        }
    }

    printf("\n\n---Menores de idade---\n");
    for(int i = 0; i < entrevistados; i++){
        if (p[i].idade < 18){
            printf("\nNome: %s, Idade: %d, Genero: %c, Voto: %d",p[i].nome, p[i].idade, p[i].genero, p[i].voto);
        }
    }

    printf("\n\n---Pessoas maiores de idade que votaram na Marta Vieira---");
    for(int i = 0; i < entrevistados; i++){
        if(p[i].idade > 12 && p[i].voto == 5){
            printf("\nNome: %s", p[i].nome);
        }
    }

    int mulheres = 0;
    for(int i = 0; i < entrevistados; i++){
        if(p[i].genero == 'F' || p[i].genero == 'f'){
            mulheres++;
        }
    }
    printf("\n\nQuantidade de mulheres que participaram da pesquisa: %d", mulheres);

}

