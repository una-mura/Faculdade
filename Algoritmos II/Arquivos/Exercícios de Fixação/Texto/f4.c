#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} info;

int main() {
    
    info pessoa[4];
    FILE *arq;
    int cont = 0;
    float medSal = 0;

    arq = fopen("dadospessoas.txt", "r");

    while (cont < 4) {
        
        fscanf(arq, "%[^_]s", pessoa[cont].nome);
        fscanf(arq, "_%d", &pessoa[cont].idade);
        fscanf(arq, "_%f", &pessoa[cont].salario);

        medSal += pessoa[cont].salario;

        cont++;
    }
    
    fclose(arq);
    medSal /= 4;
    printf("A média salarial é %.2f\n", medSal);

    return 0;
}
