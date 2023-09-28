#include <stdio.h>

int main() {

    int i, j, k, flagJ, flagK, num;

    int array[69][69];

    while (scanf("%d", &num) != EOF) {

        while (num < 1 || num >= 70)
            scanf("%d", &num);

        flagJ = 0;
        flagK = num-1;

        for (i = 0; i < num ; i++) {

            for (j = 0; j < num ; j++) {

                if (j == flagJ)
                    array[i][j] = 1;
                else
                    array[i][j] = 3;
            }

            for (k = num-1; k >= 0; k--) {

                if (k == flagK) {
                    array[i][k] = 2;
                    break;
                }
            }

            for (j = 0; j < num; j++) {
                printf("%d", array[i][j]);
            }

            flagJ++, flagK--;

            printf("\n");
        }
    }

    return 0;
}
