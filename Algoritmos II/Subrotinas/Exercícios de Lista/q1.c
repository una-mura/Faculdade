#include <stdio.h>

float compararValor(float, float, float);

int main() {

    float a, b, c, maior;

    printf("primeiro valor: ");
    scanf("%f", &a);
    printf("segundo valor: ");
    scanf("%f", &b);
    printf("terceiro valor: ");
    scanf("%f", &c);

    maior = compararValor(a, b, c);

    printf("\nO maior valor é %.2f\n", maior);

    return 0;
}

float compararValor(float x, float y, float z) {
    float m;
    m = x;

    if (y > m)
        m = y;
    if (z > m)
        m = z;

    return m;
}
