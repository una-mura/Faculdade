#include <stdio.h>

/* Crie um algoritmo que leia uma matriz 5x5. Em seguida, conte quantos números pares
existem na matriz */

int main() {
    int i, j, qtdPar = 0, matriz[5][5];

    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++) {
            printf("\ndigite o valor da célula [%i, %i]: ", i+1, j+1);
            scanf("%i", &matriz[i][j]);  
            if (matriz[i][j] % 2 == 0)
                qtdPar++;
        }  

    printf("\nexistem %i números pares na matriz", qtdPar);

    return 0;
}