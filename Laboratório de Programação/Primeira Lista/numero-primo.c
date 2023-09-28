#include <stdio.h>

int main() {

    int confirma, naoPrimo, i, j, n, x;

    do {
        scanf("%d", &n);

        if (n < 1 || n > 100)
            confirma = 0;
        else
            confirma = 1;

    } while (confirma == 0);

    for (i = 1; i <= n; i++) {

        naoPrimo = 0;

        do {
            scanf("%d", &x);

            if (x < 1 || x > 10000000)
                confirma = 0;
            else
                confirma = 1;

        } while (confirma == 0);

        for (j = 2; j <= x / 2; j++)
            if (x % j == 0) {
                naoPrimo = 1;
                break;
            }


        if (naoPrimo == 1)
            printf("%d nao eh primo\n", x);
        else
            printf("%d eh primo\n", x);
    }

    return 0;
}