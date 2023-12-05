#include<stdio.h>

main(){

    int primeiro_vetor[10];
    int segundo_vetor[10];
    int terceiro_vetor[20];
    int c1=0;
    int c2 = 0;
    
    for (int i = 0; i < 10; i++){
        printf("Digite o valor do primeiro vetor: ");
        scanf("%d", &primeiro_vetor[i]);

    }

    for (int i = 0; i < 10; i++){
        printf("Digite o valor do segundo vetor: ");
        scanf("%d", &segundo_vetor[i]);

    }
    
    for(int i = 0; i < 20; i++){
        if(i == 0){
            terceiro_vetor[i] = primeiro_vetor[i];
        }
        if(i%2 == 0){
            terceiro_vetor[i] = primeiro_vetor[c1];
            c1++;
        }else{
            terceiro_vetor[i] = segundo_vetor[c2];
            c2++;
        }
        printf("%d ", terceiro_vetor[i]);
    }

    
}
