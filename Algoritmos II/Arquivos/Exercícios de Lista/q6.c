#include <stdio.h>

/*
Faça o algoritmo de uma função lógica que recebe como parâmetro o nome de um
arquivo de números inteiros e gere dois outros arquivos. No primeiro arquivo, devem
estar os elementos de valor par e, no segundo arquivo, devem estar os elementos de
valor ímpar. A função deve retornar VERDADEIRO em caso de sucesso da operação
e FALSO, caso contrário.
*/

int doisArquivos(char nomeA[], char nomeB[], char nomeC[]);

//fiz o main tbm
int main() {
    
    char nome_arquivo[30], nome_par[30], nome_impar[30];

    printf("Insira o local do arquivo: ");
    scanf("%s", nome_arquivo);

    printf("Insira o local de salvamento do arquivo de elementos pares: ");
    scanf("%s", nome_par);


    printf("Insira o local de salvamento do arquivo de elementos ímpares: ");
    scanf("%s", nome_impar);

    switch (doisArquivos(nome_arquivo, nome_par, nome_impar)) {
    case 0:
        printf("Não foi possível abrir um ou mais arquivos.\n");
        break;
    
    case 1:
        printf("A operação foi bem sucedida.\n");
        break;
    }

    return 0;
}

int doisArquivos(char nomeA[], char nomeB[], char nomeC[]) {

    FILE *arquivoA, *arquivoB, *arquivoC;
    char nomeB[30], nomeC[30];
    int leitor;

    //Abertura dos arquivos
    arquivoA = fopen(nomeA, "rb");
    arquivoB = fopen(nomeB, "wb");
    arquivoC = fopen(nomeC, "wb");

    //Checagem de erro ao abrir
    if (arquivoA == NULL || arquivoB == NULL || arquivoC == NULL) {

        return 0;
    }
        
    //Escrita
    while (fread(&leitor, sizeof(int), 1, arquivoA)) {
        
        if (leitor % 2 == 0)
            fwrite(&leitor, sizeof(int), 1, arquivoB);

        else
            fwrite(&leitor, sizeof(int), 1, arquivoC);
    }

    fclose(arquivoA); fclose(arquivoB); fclose(arquivoC);
    
    return 1;
}