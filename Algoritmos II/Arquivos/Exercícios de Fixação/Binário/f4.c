#include <stdio.h>

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
    int cod;

    arq = fopen("funcionario", "rb+");

    if (arq != NULL) {

        printf("Qual o código do funcionário para atualização?\nCódigo: ");
        scanf("%d", &cod);

        fseek(arq, sizeof(struct tFuncionario) * (cod-1), SEEK_SET);
        fread(&funcionario, sizeof(struct tFuncionario), 1, arq);

        printf("O funcionário recebe R$%.2f. Para qual valor deseja alterar o salário?\n", funcionario.salario);
        printf("Valor: ");
        scanf("%f", &funcionario.salario);

        fseek(arq, sizeof(struct tFuncionario) * (cod - 1), SEEK_SET);
        fwrite(&funcionario, sizeof(struct tFuncionario), 1, arq);

        fclose(arq);
    }


    return 0;
}
