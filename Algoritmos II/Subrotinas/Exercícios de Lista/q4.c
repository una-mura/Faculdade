#include <stdio.h>

void troca(float *n1, float *n2);

int main() {
    float v1, v2;

    printf("variável 1: ");
    scanf("%f", &v1);
    printf("variável 2: ");
    scanf("%f", &v2);

    troca(&v1, &v2);

    printf("%.2f\n%.2f\n", v1, v2);

    return 0;
}

void troca(float *n1, float *n2) {

    float aux;

    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
}
