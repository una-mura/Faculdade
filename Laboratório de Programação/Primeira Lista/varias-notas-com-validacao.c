#include <stdio.h>

int main() {

    float score1, score2, average;
    int isInvalid, x;

    do {

        do {
            scanf("%f", &score1);

            if (score1 < 0 || score1 > 10) {
                printf("nota invalida\n");
                isInvalid = 1;
            } else isInvalid = 0;
                
        } while (isInvalid == 1);

        do {
            scanf("%f", &score2);

            if (score2 < 0 || score2 > 10) {
                printf("nota invalida\n");
                isInvalid = 1;
            } else isInvalid = 0;
                
        } while (isInvalid == 1);

        average = (score1 + score2) / 2;
        printf("media = %.2f\n", average);

        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &x);
        } while (x != 1 && x != 2);

    } while (x == 1);

    return 0;
}