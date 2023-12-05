#include<stdio.h>

main(){

    //8. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se  aposentar. As condições para aposentadoria são: • Ter pelo menos 65 anos; • Ou ter trabalhado pelo menos 30 anos;, • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. 

    int idade, tempo_servico, aposentadoria;

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Tempo de serviçc: ");
    scanf("%d", &tempo_servico);

    if((idade >= 65 || tempo_servico >= 30) || (idade >= 60 && tempo_servico >= 25)){
        printf("Pode se aposentar");

    }else{

        printf("Nao pode se aposentar");
    }

}
