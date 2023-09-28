#include <stdio.h>

#define delim '#'

int main() {

    typedef struct dados {
        char nome[50];
        int idade;
        float salario;
    } info;

    info pessoa;
    FILE *arq;
    int cont = 0;

    arq = fopen("dados.txt", "w+");

    if (arq == NULL)
        printf("Erro durante a abertura do arquivo.\n");
    else {

        for (cont = 1; cont <= 4; cont++) {

            printf("\nPessoa [%d]\n", cont);

            printf("\nNome: ");
            scanf("%s", pessoa.nome);

            printf("Idade: ");
            scanf("%d", &pessoa.idade);

            printf("Salário: ");
            scanf("%f", &pessoa.salario);

            fprintf(arq, "Nome: %s", pessoa.nome);
            fprintf(arq, "\n");

            fprintf(arq, "Idade: %d", pessoa.idade);
            fprintf(arq, "\n");

            fprintf(arq, "Salário: %.2f\n", pessoa.salario);
            fprintf(arq, "\n");
        }

    }

    fclose(arq);

    return 0;
}
