#include<stdio.h>

main(){

    int vetor[5];
    int codigo;

    for(int i =0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

   
    do{
        printf("\nDitgite um coodigo: ");
        scanf("%d", &codigo);
        if(codigo == 1 ){
            for(int i = 0; i < 5; i++){
                printf("%d ", vetor[i]);
            }
        }else if(codigo == 2){
            for(int i = 4; i >=0; i--){
                printf("%d ", vetor[i]);
            }
        }else{
            printf("\nCodigo invalido");
        }
        }while(codigo != 1 && codigo !=2);
}
    

    


