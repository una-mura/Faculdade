#include <stdio.h>
#include <string.h>

typedef struct tFuncionario {
    char nome[30];
    char endereco[45];
    char funcao[30];
    int codigo;
    float salario;
} info;

int main() {

    FILE *arq;
    info funcionario;
    char fun[31]; // aumentado em 1 o tamanho para o caractere nulo

    arq = fopen("funcionario", "rb");

    if (arq == NULL) {
        printf("Não foi possível abrir o arquivo.");
        return 0;
    }

    printf("Qual a função para consulta?\nFunção: ");
    scanf(" %30[^\n]", fun);

    while (fread(&funcionario, sizeof(struct tFuncionario), 1, arq)) {

        if (strcmp(funcionario.funcao, fun) == 0) {
            printf("Nome: %s\n", funcionario.nome);
            printf("Salário: %.2f\n", funcionario.salario);
            printf("\n");
        }
    }

    fclose(arq);

    return 0;
}
