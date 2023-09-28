#include <stdio.h>

/* Leia uma matriz 10 x 10. Leia também um valor X. O programa deverá fazer uma
busca desse valor na matriz e, ao final escrever a localização (linha e coluna) ou uma
mensagem de “não encontrado!" */

int main() {
    int i, j, isFound = 0, valorX, matriz[3][3];

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            printf("\ndigite o valor da célula [%i,%i]: ", i+1, j+1);
            scanf("%i", &matriz[i][j]);  
        }

    while (!isFound) {
        printf("\ndigite um valor a ser buscado: ");
        scanf("%i", &valorX);
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++) {
                if (valorX == matriz[i][j]) {
                    printf("\nnúmero encontrado na localização [%i,%i]", i+1, j+1);
                    isFound = 1;
                }
            }
        
        if (!isFound)
            printf("\nnão encontrado!");
    }
    
        
    
}