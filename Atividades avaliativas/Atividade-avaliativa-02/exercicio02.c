#include<stdio.h>
    /*2.	Com a proposta para ampliação da terceirização da mão de obra, o Ministério da Fazenda está empenhado em elaborar uma análise sobre o recebimento de salário regular através do registro em carteira profissional dos funcionários no país. Assim, elabore um algoritmo que obtenha, para cada assalariado, com carteira profissional assinada, o seu sexo M(masculino) e F(feminino) e o valor de seu salário, devendo este salário ser maior que um real (R$1,00). Seu algoritmo deverá analisar e classificar este assalariado em Acima, Igual ou Abaixo do salário mínimo. Sabe-se que o salário mínimo nacional é de R$ 1400,00. Após a leitura dos dados de cada assalariado cadastrado pelo ministério deverá ser apresentado o seu salário em reais, a classificação por extenso em relação ao salário mínimo e o sexo por extenso (Masculino ou Feminino).*/
char classifica_salario(float salario){
    float salario_base = 1400.00;
    if(salario < salario_base){
        return'B';
    }else if(salario == salario_base){
        return 'I';
    }else{
        return 'A';
    }
}
void mostra_classificacao(char sexo, float salario, char classificacao){
    printf("\nSalario: %.2f R$", salario);

    switch (classificacao){
    case 'B':
        printf("\nClassificacao: Abaixo do salario minimo");
        break;
    case 'I':
        printf("\nClassificacao: Igual ao salario minimo");
        break;
    case 'A':
        printf("\nClassificacao: Acima do salario minimo");
        break;
    default:
        printf("Erro");
    }

    if(sexo == 'M' || sexo == 'm'){
        printf("\nSexo : Masculino");
    }else{
        printf("\nSexo: Feminino");
    }
}
main(){
    char sexo;
    float salario;
    int contador_pessoas=0, contador_acima=0, contador_abaixo=0, opcao_cadastro;
    do{
        do{
            printf("Sexo: ");
            scanf("%s", &sexo);
            if(sexo != 'M' && sexo != 'F' && sexo != 'm' && sexo != 'f'){
            printf("\nSexo invalido, digite novamente");
            }
        }while(sexo != 'M' && sexo != 'F' && sexo != 'm' && sexo != 'f');
        
        do{
            printf("\nSalario: ");
            scanf("%f", &salario);
            if(salario < 1.00){
                printf("\nSlario invalido, digite novamente");
            }
        }while(salario < 1.00);
       

        char classificacao = classifica_salario(salario);
        mostra_classificacao(sexo, salario, classificacao);

        contador_pessoas++;
        if(classificacao == 'A'){
            contador_acima++;
        }else if(classificacao == 'B'){
            contador_abaixo++;
        }

        printf("\nDeseja cadastrar um novo funcionario [1]Sim [2]Nao: ");
        scanf("%d", &opcao_cadastro);
    
    }while(opcao_cadastro != 2);
    printf("\nTotal de assalariados cadastrados: %d", contador_pessoas);
    printf("\nQuantida de assalariados com salario a baixo do salario minimo: %d", contador_acima);
    printf("\nQuantidade de assalariados com salario acima do salario minimo: %d", contador_abaixo);
    
}