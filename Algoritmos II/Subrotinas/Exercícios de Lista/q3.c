#include <stdio.h>

int triangle(int, int, int);

int main() {
    unsigned int l1, l2, l3;

    printf("lado 1: ");
    scanf("%d", &l1);
    printf("lado 2: ");
    scanf("%d", &l2);
    printf("lado 3: ");
    scanf("%d", &l3);

    triangle(l1, l2, l3);

    switch (triangle(l1, l2, l3)) {
        case 1:
            printf("os lados formam um triângulo\n");
            break;
        case 0:
            printf("não foi possível formar triângulo\n");
            break;
    }

    return 0;
}

int triangle (int a, int b, int c) {
    int isTriangle = 0;

    if (a > 0 && b > 0 && c > 0)
        if ((a < b + c) && (b < a + c) && (c < a + b)) {isTriangle = 1;}

    return isTriangle;
}
