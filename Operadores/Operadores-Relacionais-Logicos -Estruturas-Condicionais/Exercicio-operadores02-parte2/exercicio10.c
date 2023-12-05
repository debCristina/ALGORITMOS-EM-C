#include<stdio.h>
#include<math.h>

main(){
    /*
        Calcule as raízes da equação de 2º grau
        A varável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não e equação de segundo grau”. 

        • Se ∆ < 0, não existe real. Imprima a mensagem: Não existe raiz. 

        • Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz  única.

        • Se ∆ > 0, imprima as duas raízes reais. 
    */

    float A, B, C, delta, x, x1, x2;

    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de B: ");
    scanf("%f", &B);

    printf("Digite o valor de C: ");
    scanf("%f", &C);

    delta = pow(B, 2) - 4 * A * C;

    if(delta < 0){
        printf("Nao existe raiz");

    }else if (delta == 0) {
        x = -B / (2*A);
        printf("Raiz: %.2f \nRaiz  única", x);

    }else {
        x1 = (-B + sqrt(delta)) / (2 * A);
        x2 = (-B - sqrt(delta))/ (2 * A);
        printf("Raizes: %.2f e %.2f", x1, x2);
    }
}
