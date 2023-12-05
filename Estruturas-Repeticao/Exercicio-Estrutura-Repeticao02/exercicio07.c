#include<stdio.h>

main(){

    /*7) Faça um algoritmo em para ler o nome, o sexo ( M ou m para masculino e F ou f para feminino), a altura e o peso de um grupo de 10 pessoas. O programa de deve calcular e exibir: 
    o número de homens;
    o número de mulheres; 
    a altura média dos homens;
    a altura média das mulheres; a altura média do grupo;
    o peso médio dos homens;
    o peso médio das mulheres;
    e o peso médio do grupo*/
    
    char nome[50];
    char sexo;
    int contador_pessoas=0, contador_M=0, contador_F=0;
    float soma_alt_M=0, soma_alt_F=0, media_alt_M=0, media_alt_F=0, soma_alt_grupo=0, media_alt_grupo=0;
    float soma_peso_M=0, soma_peso_F=0,soma_peso_grupo, media_peso_M, media_peso_F, media_peso_grupo; 
    float alt, peso;

    while(contador_pessoas < 10){
        contador_pessoas++;

        printf("Nome: ");
        fgets(nome, 50, stdin);
        fflush(stdin);

        do{
            printf("Sexo [M ou m / F ou f]: ");
            scanf("%c", &sexo);
            fflush(stdin);

            if(sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f'){
                printf("sexo invalido, tente novamente");
            }
        }while(sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');

        printf("Altura: ");
        scanf("%f", &alt);
        fflush(stdin);

        printf("Peso: ");
        scanf("%f", &peso);
        fflush(stdin);

        if(sexo == 'M' || sexo== 'm'){
            contador_M++;
            soma_alt_M += alt;
            soma_peso_M += peso;
        }else{
            contador_F++;
            soma_alt_F += alt;
            soma_peso_F += peso;
        }

        soma_alt_grupo += alt;
        soma_peso_grupo +=peso;

    }
    media_alt_M = (float) soma_alt_M / contador_M;
    media_alt_F = (float) soma_alt_F / contador_F;
    media_alt_grupo = (float) soma_alt_grupo / contador_pessoas;
    media_peso_M = (float) soma_peso_M / contador_M;
    media_peso_F= (float) soma_peso_F / contador_F;
    media_peso_grupo = (float) soma_peso_grupo / contador_pessoas;

    printf("\n--------RESULTADO--------");
    printf("\nNumero de homens: %d", contador_M);
    printf("\nNumero de mulheres: %d", contador_F);
    printf("\nAltura media dos homens: %.2f", media_alt_M);
    printf("\nAltura media das mulheres: %.2f", media_alt_F);
    printf("\nAltura media do grupo: %.2f", media_alt_grupo);
    printf("\nPeso medio dos homens: %.2f", media_peso_M);
    printf("\nPeso medio das mulheres: %.2f", media_peso_F);
    printf("\nPeso medio do grupo: %.2f", media_peso_grupo);



}