#include<stdio.h>

main(){

    int vetorA[5] ;
    int vetorB[5] ;
    int vetorC[5];
    int contadorC=0;
    int iguais=0;

    for(int i = 0; i < 5; i++){
        printf("Digite os valores do vetor A: ");
        scanf("%d", &vetorA[i]);
    }

    for(int i = 0; i < 5; i++){
         printf("Digite os valores do vetor B: ");
         scanf("%d", &vetorB[i]);
    }

    
    for(int i = 0; i < 5; i++){
        int iguais = 0;

        for(int j = 0; j <5; j++){
            if(vetorA[i] == vetorB[j]){
                iguais = 1;
                break;
            }
        }

        if(!iguais){
            vetorC[contadorC] = vetorA[i];
            contadorC++;
        }
    }


    for(int i= 0; i < contadorC; i++){
        printf("Valorer C: %d ", vetorC[i]);
    }
}
    


