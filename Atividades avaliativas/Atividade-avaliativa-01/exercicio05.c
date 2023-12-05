#include<stdio.h>
#include<math.h>
main(){
    /*5. Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula: */

    float x1, y1, x2, y2, distancia;

    printf("Informe os valores correspondentes aos eixo x e y no plano: ");
    printf("\nP1 \n[x1]: ");
    scanf("%f", &x1);
    printf("[y1]: ");
    scanf("%f", &y1);
    printf("P2 \n[x2]: ");
    scanf("%f", &x2);
    printf("[y2]: ");
    scanf("%f", &y2);

    distancia= sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("A distancia entre os pontos e igual a %.4f", distancia);
}
