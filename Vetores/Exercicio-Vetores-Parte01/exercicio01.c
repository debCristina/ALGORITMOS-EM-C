#include<stdio.h>

main(){

    int a[6] = {1,0,5,-2,-5,7}, soma=0;
    /* 
    soma = a[0] + a[1] + a[5];

    printf("Soma: %d", soma);

    a[4] = 100;
    */

    for(int i=0; i <6; i++){
        if(i == 0 || i==1 || i==5 ){
            soma += a[i];
        }
        if(i==4){
            a[i] = 100;
        }
    }


    for(int i = 0; i < 6; i++){
        printf("\n%d", a[i]);
    }

    printf("\nSoma: %d", soma);
}