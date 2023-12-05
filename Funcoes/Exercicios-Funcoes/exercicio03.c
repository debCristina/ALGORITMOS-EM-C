#include<stdio.h>


float converter(float tempF){
    float celsius = (tempF - 32.0) * (5.0/9.0);
    return celsius;

}
main(){
    float resultado = converter(100.0);

    printf("Celsius: %.2f", resultado);
}