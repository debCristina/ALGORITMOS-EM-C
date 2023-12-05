#include<stdio.h>

main(){

    //7. Faça um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira e  a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou  superior a 7.0 pontos. 

    float nota1, nota2, nota3, media;

    printf("Primeira nota:");
    scanf("%f", &nota1);
    
    printf("Segunda nota: ");
    scanf("%f", &nota2);

    printf("Terceira nota: ");
    scanf("%f", &nota3);

    media = ((nota1 * 1) + (nota2 * 1) + (nota3 * 2)) / (1 + 1 + 2);

    if(media >= 7.0){
        printf("Media %.2f \nAprovado!", media);

    }else{
        printf("Media %.2f \nReprovado!", media);

    }
}
