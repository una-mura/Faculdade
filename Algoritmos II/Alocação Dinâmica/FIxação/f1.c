#include "stdio.h"

//Quais serão os valores de x, y e p ao final do trecho de código abaixo?

int main() {

    int x, y, *p;

    p = &y;
    y = 0;
    x = *p;
    x = 4;
    (*p)++;
    --x;
    (*p) += x;

    printf("x: %d \ny: %d \np: %p\n", x, y, p);

    return 0;
}