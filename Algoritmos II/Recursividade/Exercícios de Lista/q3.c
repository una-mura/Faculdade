#include <stdio.h>

float somaElementos(float vetor[], int tam);

int main() {

    float num[10], soma;
    int i;
    
    for (i = 0; i < 10; i++) {
        printf("número %d: ", i+1);
        scanf("%f", &num[i]);
    }

    soma = somaElementos(num, 10);

    printf("soma: %.2f\n", soma);

    return 0;
}

float somaElementos(float vetor[], int tam) {
    
    if (tam <= 0)
        return 0;
    else
        return vetor[tam-1] + somaElementos(vetor, tam-1);
}
