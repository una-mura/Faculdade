#include <stdio.h>

int main() {
    
    int maior, i, num, pos, vetor[8];

    for (i = 0; i < 8; i++) {
        printf("Informe número na posição %d: ", i); scanf("%d", &num);
        vetor[i] = num;
    }

    maior = vetor[0]; pos = 0;
    for (i = 0; i < 8; i++) {

        if (vetor[i] > maior) {
            maior = vetor[i];
            pos = i;
        }
    }

    printf("O maior valor é %d, na posição %d\n", maior, pos);

    return 0;
}
