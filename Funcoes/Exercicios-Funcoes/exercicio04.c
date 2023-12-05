#include<stdio.h>
#include<math.h>

double calcular_volumeC(double alt, double raio);

main(){
    double r = 10, a = 5;
    double res= calcular_volumeC(a, r);
    printf("O volume e: %.2lf", res);
    
}

double calcular_volumeC(double alt, double raio){
    double pi = 3.1415;
    double volumeC = pi * pow(raio, 2) * alt;
    return volumeC;
}
