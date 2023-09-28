#include <stdio.h>

/* Número perfeito é um número natural que coincide com a soma de seus divisores
próprios (excluído o próprio número), como os números 6, 28, 496, 8128 e 33550336.
Construir um algoritmo que gere os números perfeitos menores que um dado valor
digitado */

int isPerfect(int i) {
    int j, soma = 0;

    for (j = 1; j < i; j++) {
        if (i % j == 0)
            soma = soma + j;
    }

    if (soma == i)
        return 1;
    
    return 0;
}

int main() {
    int i, num;

    printf("digite um número: ");
    scanf("%i", &num);

    printf("\nlista de números perfeitos menores que %d:", num);
    for (i = 1; i < num; i++)
        if (isPerfect(i))
            printf("\n- %i\n", i);

    return 0;
}