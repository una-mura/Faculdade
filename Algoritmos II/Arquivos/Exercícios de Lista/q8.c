#include <stdio.h>

/*
Considerando um arquivo de texto já gravado, escreva uma função lógica que receba
esse arquivo como parâmetro e verifique se, no texto, aparece a palavra ‘SENHA’.
*/

int senha(FILE *a) {

    char letra, nome[30], senha[] = "senha", texto[100];
    int i, j, tamanho;

    printf("Insira o local do arquivo: ");
    scanf("%s", nome);
    
    a = fopen(nome, "r");

    if (a == NULL)
        return -1;

    //pega o tamanho e escreve o texto na string "texto"
    while (fscanf(a, "%c", &letra) != '\0') {
        tamanho = tamanho + 1;
        texto[i] = letra;
    }

    //rewind pra recomeçar a ler
    rewind(a);
    j = 0;

    for (i = 0; i < tamanho; i++) {
        
        //achou o primeiro termo, 'S"
        if (texto[i] == senha[j]) {
            
            j = j + 1;

            //caso incremente 5 vezes, é a senha
            if (j == 5) {
                fclose(a);
                return 1;
            }
        }

        //depois que achar o 'S', se tiver uma letra errada pra ser "SENHA", reseta
        else
            j == 0;
    }

    fclose(a);

    return 0;
}
