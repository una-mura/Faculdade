#include <stdio.h>

float soma(float);

int main() {

    printf("Soma dos termos: %lf", soma(20))

    return 0;
}

float soma(float n) {

    if (n == 1)
        return n;
    else
        return n / (2 * n - 1) + soma(n-1);
    }
}
