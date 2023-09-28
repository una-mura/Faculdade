#include "stdio.h"

/*
Faça um algoritmo que reúna os dados de dois arquivos de registros de mesma
estrutura Matrícula e Nome num terceiro arquivo.
*/

typedef struct tRegistro {
    int matricula;
    char nome[30];
} registro;

int main() {

    FILE *arquivoA, *arquivoB, *arquivoC;
    registro aluno; char nome_arquivo[30];

    printf("Insira o local do arquivo que deseja selecionar (Primeiro Arquivo): ");
    scanf("%s", nome_arquivo);

    arquivoA = fopen(nome_arquivo, "rb");

    if (arquivoA == NULL) {
        
        printf("Não foi possível abrir o arquivo.\n");
        return 0;
    }
    else {
        
        printf("Insira o local do arquivo que deseja selecionar (Segundo Arquivo): ");
        scanf("%s", nome_arquivo);

        arquivoB = fopen(nome_arquivo, "rb");

        if (arquivoB == NULL) {
            printf("Não foi possível abrir o arquivo.\n");

        }
        else {

            printf("Insira o local em que os dados serão armazenados (Terceiro Arquivo): ");
            scanf("%s", nome_arquivo);

            arquivoC = fopen(nome_arquivo, "wb+");
            
            //escreve no Arquivo C enquanto tiver coisa do Arquivo A pra ler
            while (fread(&aluno, sizeof(struct tRegistro), 1, arquivoA)) {
                
                fwrite(&aluno, sizeof(struct tRegistro), 1, arquivoC);
            }

            //escreve no Arquivo C enquanto tiver coisa do Arquivo B pra ler
            while (fread(&aluno, sizeof(struct tRegistro), 1, arquivoB)) {

                fwrite(&aluno, sizeof(struct tRegistro), 1, arquivoC);
            }

            //aparentemente preciso voltar o cursor do Arquivo C pro começo, pq ele começa
            //a ler a partir de onde parou de escrever quando usa wb+. (emoji de palhaço)
            rewind(arquivoC);

            //mostra o conteúdo do Arquivo C
            while (fread(&aluno, sizeof(struct tRegistro), 1, arquivoC)) {
                    
                    printf("\nNome: %s", aluno.nome);
                    printf("\nMatrícula: %d\n", aluno.matricula);
                }
        }
    }   
    
    fclose(arquivoA); fclose(arquivoB); fclose(arquivoC);

    return 0;
}
