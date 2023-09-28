#include <stdio.h>

/* Fazer um algoritmo para ler e preencher um vetor de 150 números inteiros e, após
lidos todos os valores, modificá-lo de forma a fazer com que todos os números pares
fiquem antes de todos os números ímpares */

int main() {
    int i, j = 0, aux, num[10];

    printf("insira 10 números\n");
    for (i = 0; i <= 9; i++) {
        printf("\n%i: ", i+1);
        scanf("%i", &num[i]);
    }

    for (i = 0; i <= 9; i++)
        if (num[i] % 2 == 0) {
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
                j++;
            }

    for (i = 0; i <= 9; i++)
        printf("%i ", num[i]);

    return 0;
}