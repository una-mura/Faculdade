#include <stdio.h>

/*
Faça um programa que atualize o salário de um funcionário no arquivo dos exercícios
anteriores. O código do funcionário e o novo salário devem ser lidos do teclado.
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
    registro funcionario[10]; //defini como 10 porque não tem como herdar a qtd de funcionários do código da questão 9
    char nome[31];
    int codigo, flag, i;
    float novo_salario;

    printf("Código do funcionário a ser alterado: ");
    scanf("%d", &codigo);

    printf("Valor do novo salário: ");
    scanf("%f", &novo_salario);

    printf("\nInsira o local do arquivo: ");
    scanf("%s", nome);

    arquivo = fopen(nome, "rb+");

    if (arquivo == NULL) {
        printf("Não foi possível abrir o arquivo.\n");
        return 0;
    }
    
    flag = 0;

    for (i = 0; flag == 1; i++) {
        
        fread(&funcionario, sizeof(registro), 1, arquivo);

        if (funcionario[i].codigo == codigo) {
            
            funcionario[i].salario == novo_salario;
            fseek(arquivo, i*sizeof(registro), SEEK_SET); //multiplica pelo valor de 'i' pra percorrer o cursor
            fwrite(&funcionario[i], sizeof(registro), 1, arquivo);
            flag = 1; 
        }
    }

    fclose(arquivo);

    if (flag)
        printf("Salário alterado com sucesso.\n");
    
    else
        printf("Não foi possível localizar funcionário.\n");

    return 0;
}
