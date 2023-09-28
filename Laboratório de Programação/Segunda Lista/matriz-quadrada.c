#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, j, num, ord;

    scanf("%d", &ord);

    while (ord != 0) {

        for (i = 1; i <= ord; i++) {
            for (j = 1; j <= ord; j++) {

                num = abs(i - j) + 1;

                if (j == 1)
                    printf("%3d", num);
                else
                    printf(" %3d", num);
            }

            printf("\n");
        }

        scanf("%d", &ord);

        printf("\n");
    }

    return 0;
}