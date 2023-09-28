#include <stdio.h>

/*
Faça o algoritmo de uma função lógica que receba o nome de um arquivo de reais e
devolva, em uma variável real passada como parâmetro por referência, o maior valor
nela contido. A função deve retornar VERDADEIRO se, e apenas se, o arquivo exista
e haja valor a ser devolvido.
*/

int maiorValor(char *nome, float *maior_num);

//fiz o main tbm
int main() {

    char nome_arquivo[30];
    float num = 0.0, *p;
    int result;

    printf("Insira o local do arquivo: ");
    scanf("%s", nome_arquivo);

    p = &num;

    result = maiorValor(nome_arquivo, p);

    if (result == -1)
        printf("Não foi possível abrir o arquivo.\n");

    else if (result == 0)
        printf("Não foi possível ler dados do arquivo.\n");

    else if (result == 1)
        printf("Maior número: %.1f\n", *p);

    return 0;
}

int maiorValor(char *nome, float *maior_num) {

    FILE *arquivoA = fopen(nome, "rb");
    float n;

    if (arquivoA == NULL) {

        return -1;
    }

    if (!fread(&n, sizeof(float), 1, arquivoA)) {

        fclose(arquivoA);
        return 0;
    }

    *maior_num = n;

    while(fread(&n, sizeof(float), 1, arquivoA)) {
                
        if (n >= *maior_num)
            *maior_num = n;
    }

    fclose(arquivoA);

    return 1;
}
