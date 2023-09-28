#include <stdio.h>

/*
Gere um arquivo funcionário, em que cada registro armazene o código do funcionário
(inteiro entre 1 e 140), seu nome (30 caracteres), endereço (45 caracteres), salário
(real) e a função (inteiro: 1-operador / 2-contador / 3-vendedor / 4-gerente), com no
mínimo 10 funcionários, tendo pelo menos 3 com a função de gerente. O acesso aos
dados dos funcionários será feito com base no seu código, utilizando acesso direto.
Os dados de um funcionário estarão na posição do seu código.
*/

typedef struct tRegistro {
    char nome[31]; //chatGPT me recomendou aumentar em 1 o nome e endereço pra acomodar o '\0'
    char endereco[46];
    int codigo;
    int funcao;
    float salario;
} registro;

int main() {
    
    int qtd = 0;
    
    while (qtd < 3) {
        
        printf("Quantidade de funcionários (Mínimo 10): ");
        scanf("%d", &qtd);
    }

    FILE *arquivo;
    registro funcionario[qtd];
    char nome[31];
    int gerente = 0;

    //Coleta de dados
    for (int i = 0; i < qtd; i++) {
        
        printf("\nFuncionário [%d]\n\n", i+1);

        printf("Nome: ");
        scanf(" %[^\n]", funcionario[i].nome);

        printf("Código: ");
        scanf("%d", &funcionario[i].codigo);

        printf("Função (1. Operador | 2. Contador | 3. Vendedor | 4. Gerente): ");
        scanf("%d", &funcionario[i].funcao);

        if (funcionario[i].funcao == 4) {
            gerente++;
        }

        printf("Salário: ");
        scanf("%f", &funcionario[i].salario);

        printf("Endereço: ");
        scanf(" %[^\n]", funcionario[i].endereco);

        if (gerente < 3 && i == qtd - 1) {
            printf("Número mínimo de gerentes não atingido.\n");
            i = -1;
            gerente = 0;
        }
    }
    
    printf("\nInsira o local do arquivo: ");
    scanf("%s", nome);

    arquivo = fopen(nome, "wb");

    if (arquivo == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 0;
    }
    
    for (int i = 0; i < qtd; i++) {
        fwrite(&funcionario[i], sizeof(registro), 1, arquivo);
    }

    fclose(arquivo);

    return 0;
}
