#include <stdio.h>

/*
Faça um algoritmo de uma função inteira que receba o nome de um arquivo de inteiros
e um valor inteiro e retorne quantos números são maiores que o valor recebido por
parâmetro. Em caso de erro, deve ser retornado o valor -1.
*/

int maiorValor(char *nome, int comparativo);

//fiz o main tbm
int main() {
    
    char nome_arquivo[30];
    int num, resultado;

    printf("Insira o local do arquivo: ");
    scanf("%s", nome_arquivo);

    printf("Número comparativo: ");
    scanf("%d", &num);

    resultado = maiorValor(nome_arquivo, num);

    if (resultado == -1) {
        printf("Erro.");
    }

    else {
        printf("Quantidade de números maiores que %d é igual a %d\n", num, resultado);
    }
    
    

    return 0;
}

int maiorValor(char *nome, int comparativo) {

    FILE *arquivoA = fopen(nome, "rb");
    int leitor, contador = 0;

    if (arquivoA == NULL) {

        return -1;
    }

   if (!fread(&leitor, sizeof(int), 1, arquivoA)) {

        fclose(arquivoA);
        return -1;
    }
            
    while (fread(&leitor, sizeof(int), 1, arquivoA)) {
                
        if (leitor > comparativo)
            contador++;
    }

    return contador;
}
