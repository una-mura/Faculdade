#include <stdio.h>

/* Defina o tipo registro ponto com dois campos x e y (reais). Os campos representam
as coordenadas desse ponto no sistema cartesiano. Escreva um programa que, dados
dois pontos, calcule a distância entre eles */

int main() {
    struct coordenadas {
        float x, y;
    } ponto1, ponto2;

    float d, x, y;

    printf("coordenada x do ponto 1: ");
    scanf("%f", &ponto1.x); 
    printf("coordenada y do ponto 1: ");
    scanf("%f", &ponto1.y);
    printf("coordenada x do ponto 2: ");
    scanf("%f", &ponto2.x); 
    printf("coordenada y do ponto 1: ");
    scanf("%f", &ponto2.y); 

    x = (ponto2.x - ponto1.x);
    y = (ponto2.y - ponto1.y);
    d =  (x * x) + (y * y);
    printf("\ndistância entre os dois pontos: %.2f", d);

    return 0;
}