#include <stdio.h>

/*
A partir dos dados armazenados num arquivo "funcionário", gere um
relatório que liste o nome e o salário dos funcionários cuja função é “gerente” (número 4).
*/

typedef struct tRegistro {
    char nome[31];
    char endereco[46];
    int codigo;
    int funcao;
    float salario;
} registro;

int main() {
    
    FILE *arquivo;
    registro funcionario;
    char nome[31];

    printf("\nInsira o local do arquivo: ");
    scanf("%s", nome);

    arquivo = fopen(nome, "rb");

    if (arquivo == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 0;
    }

    printf("\nRelatório - Dados dos Gerentes\n\n");

    while (fread(&funcionario, sizeof(registro), 1, arquivo)) {
        
        if (funcionario.funcao == 4) {
            printf("Nome: %s\n", funcionario.nome);
            printf("Salário: %.2f\n\n", funcionario.salario);
        }
    }
    
    fclose(arquivo);

    return 0;
}
