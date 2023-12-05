#include<stdio.h>

main(){
    //leia a media de um aluno
    // Se media >= 7 -> APROVADO
    //Se media < 4 -> REPROVADO
    //Senao media>= 4 < 7 -> RECUPERACAO

    float media;

    printf("Digite sua media: ");
    scanf("%f", &media);
    
    if(media >= 7.0){
        printf("APROVADO");

    }else if(media < 4.0){
        printf("REPROVADO");

    }else{
        printf("RECUPERACAO");
    }
}
