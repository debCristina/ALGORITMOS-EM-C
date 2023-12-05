#include<stdio.h>
#include<stdlib.h>

main(){

    /*Um cinema possui capacidade de 100 lugares e está sempre com ocupação total. Certo dia, cada espectador respondeu a um questionário, no qual constava:
    - sua idade;
    - sua opinião em relação ao filme, segundo as seguintes notas:
    Nota        Significado
    A              Ótimo
    B              Bom
    C             Regular
    D             Ruim
    E              Péssimo
    Elabore um algoritmo que, lendo estes dados, calcule e imprima:
    a quantidade de respostas ótimo;
    a diferença percentual entre respostas bom e regular;
    a média de idade das pessoas que responderam ruim;
    a percentagem de respostas péssimo e a maior idade que utilizou esta opção;
    a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim.*/

    int idade, contador_pessoas=0, contador_otimo=0, contador_bom=0, contador_regular=0, contador_ruim=0, contador_pessimo=0,maior_idade=0, soma_idade_opcao_D=0, idade_opcao_D=0, idade_opcao_A=0, diferenca_idades, diferenca_absoluta;
    float diferenca_percentual, porcentagem_pessimo=0, media_idade=0; 
    char nota;



    do{
        contador_pessoas++;

        printf("Idade: ");
        scanf("%d", &idade);
        fflush(stdin);

        printf("Qual sua opniao sobre o filme?");
        printf("\n[A] OTIMO\n[B] BOM\n[C] REGULAR\n[D] RUIM\n[E] PESSIMO\n-->");
        scanf("%c", &nota);
        fflush(stdin);

        switch (nota){
        case 'A':
            contador_otimo++;
            if(idade > idade_opcao_A){
                idade_opcao_A = idade;
            }
            break;
        case 'B':
            contador_bom++;
            break;
        case 'C':
            contador_regular++;
            break;
        case 'D':
            soma_idade_opcao_D+= idade;
            contador_ruim++;
            if(idade > idade_opcao_D){
                idade_opcao_D= idade;
            }
            break;
        case 'E':
            contador_pessimo++;
            if(idade > maior_idade){
                maior_idade = idade;
            }
            break;
        default:
            printf("A OPCAO NAO CORRESPONDE A UM VALOR VALIDO");
            break;
    }
    }while (contador_pessoas < 100);

    
    // calcular a diferenca percentual entre notas boas e regulares;
    diferenca_absoluta= abs(contador_regular-contador_bom);
    diferenca_percentual = ((float)diferenca_absoluta / contador_bom) * 100;

    // calcular a media de idades das pessoas que responderam ruim;
    media_idade = (float) soma_idade_opcao_D / contador_ruim;

    // calcular a porcentagem de respostas pessimas;
    porcentagem_pessimo = ((float)contador_pessimo/ contador_pessoas) * 100;

    // calcular a diferença de idade entre a mior idade que respondeu otimo e a maior idade que respondeu ruim;
    diferenca_idades = abs(idade_opcao_A - idade_opcao_D);

    printf("\nQuantidade de respostas otimo: %d", contador_otimo);
    printf("\nDiferenca percentual entre respostas bom e regular: %.2f%%", diferenca_percentual);
    printf("\nMedia de idade das pessoas que responderam ruim %.2f", media_idade);
    printf("\nPorcentagem de respostas pessimo e a maior idade que utilizou esta opcao: %.2f%%, %d anos", porcentagem_pessimo, maior_idade);
    printf("\nDiferenca de idade entre a maior idade que respondeu otimo e a maior idade que respondeu ruim: %d", diferenca_idades);
    
}