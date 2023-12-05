#include<stdio.h>

main(){
    int aluno[10];
    int numero_maior_aluno, numero_menor_aluno;
    float altura[10];
    float maior_aluno, menor_aluno; 

    for(int i = 0; i < 10; i++){
        printf("\nNumero do aluno: ");
        scanf("%d", &aluno[i]);

        printf("Digite a altura do aluno %d -->", aluno[i]);
        scanf("%f", &altura[i]);
        
    } 
    maior_aluno = altura[0];
    menor_aluno = altura[0];
    numero_maior_aluno = aluno[0];
    numero_menor_aluno = aluno[0];

    for(int i = 0; i < 10; i++){
        if(altura[i] > maior_aluno){
            maior_aluno = altura[i];
            numero_maior_aluno = aluno[i];
        }
        if(altura[i] < menor_aluno){
            menor_aluno = altura[i];
            numero_menor_aluno = aluno[i];
        }
    }
    printf("\nMaior Aluno %d, Altura %.2f", numero_maior_aluno, maior_aluno);
    printf("\nMenor Aluno %d, Altura %.2f", numero_menor_aluno, menor_aluno);
}

   

    

            

