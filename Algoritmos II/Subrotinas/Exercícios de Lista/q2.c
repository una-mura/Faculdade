#include <stdio.h>

void multiplos(int, int, int);

int main() {
    int p1, p2, p3;

    printf("primeiro parâmetro: ");
    scanf("%d", &p1);
    printf("segundo parãmetro: ");
    scanf("%d", &p2);
    printf("terceiro parâmetro: ");
    scanf("%d", &p3);

    multiplos(p1, p2, p3);

    return 0;
}

void multiplos(int n1, int n2, int n3) {
    int i;

    printf("\n");

    if (n1 < n2) {
        for (i = n1; i <= n2; i++)
            if (i % n3 == 0)
                printf("%d ", i);
    } else {
        for (i = n1; i >= n2; i--)
            if (i % n3 == 0)
                printf("%d ", i);
    }

    printf("\n");
}
