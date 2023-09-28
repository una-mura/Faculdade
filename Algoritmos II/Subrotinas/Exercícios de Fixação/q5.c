#include <stdio.h>

void conversor(int *s, int *m, int *h);

int main() {
    int segundos, minutos, horas;

    printf("segundos: ");
    scanf("%d", &segundos);

    conversor(&segundos, &minutos, &horas);

    printf("%d %d %d\n", horas, minutos, segundos);
}

void conversor(int *s, int *m, int *h) {
        *m = *s / 60;
        *s = *s % 60;

        *h = *m / 60;
        *m = *m % 60;
}
