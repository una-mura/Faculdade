#include <stdio.h>

/* Faça um algoritmo que leia 21 números reais e escreva na saída 
o valor da mediana deles */

int main() {
    int i, j, aux, num[21];

    printf("insira 21 números\n");
    for (i = 1; i <= 21; i++) {
        printf("\n%i: ", i);
        scanf("%d", &num[i-1]);
    }

    for (i = 0; i <= 20; i++)
        for (j = 0; j <= 20; j++)
            if (num[j] < num[i]) {
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }

    printf("mediana dos números: %i ", num[10]);

    return 0;
}