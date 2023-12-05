#include<stdio.h>
#include<math.h>
main(){

    int vetor[10]= {1,2,3,4,5,6,7,8,9,10};
    float desvio_padrao=0, soma=0, somaPow=0, media=0;

    for(int i = 0; i < 10; i ++){
        soma += vetor[i];
    }
    media = soma/ 10;
    for(int i = 0; i < 10; i++){
        somaPow += pow(vetor[i] - media, 2);
    }

    desvio_padrao = sqrt(( somaPow/ (10 - 1)) );
    printf("Desvio Padrao: %.4f", desvio_padrao);
}