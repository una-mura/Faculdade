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
    int cont, qtd;

    printf("Qual a quantidade de funcionários a registrar?\nQuantidade: ");
    scanf("%d", &qtd);

    while (qtd < 2) {
        printf("Número de funcionários deve ser no mínimo 10! Digite novamente: ");
        scanf("%d", &qtd);
    }

    arq = fopen("funcionario", "wb");

    if (arq == NULL)
        printf("Não foi possível abrir o arquivo.");
    else {

        for (cont = 1; cont <= qtd; cont++) {

            printf("\nCódigo (1 - 140): ");
            scanf("%d", &funcionario.codigo);

            while (funcionario.codigo < 1 || funcionario.codigo > 140) {
                printf("Código deve ser maior que um e menor que 140! Digite novamente: ");
                scanf("%d", &funcionario.codigo);
            }

            printf("Nome (Limite de 30 caracteres): ");
            scanf(" %[^\n]", funcionario.nome);

            printf("Função (Limite de 30 caracteres): ");
            scanf(" %[^\n]", funcionario.funcao);

            printf("Salário: ");
            scanf("%f", &funcionario.salario);

            printf("Endereço (Limite de 45 caracteres): ");
            scanf(" %[^\n]", funcionario.endereco);

            fseek(arq, sizeof(struct tFuncionario) * (funcionario.codigo - 1), SEEK_SET);

            fwrite(&funcionario, sizeof(struct tFuncionario), 1, arq);
        }
    }

    fclose(arq);

    return 0;
}