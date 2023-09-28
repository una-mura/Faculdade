#include <stdio.h>

/*
Escreva um algoritmo que exclua os comentários do texto código-fonte de um programa
escrito em uma linguagem de programação onde estes são escritos entre { }, e escreva
o novo código fonte em um novo arquivo de texto.
*/

int main() {
    
    FILE *arq_in, *arq_out;
    char letra;
    int parar = 0;

    arq_in = fopen("textos/q3_a.txt", "r");
    arq_out = fopen("textos/q3_b.txt", "w");

    if (arq_in == NULL || arq_out == NULL) {
        
        printf("Não foi possível abrir o arquivo.\n");
        return 0;
    }

    while (fscanf(arq_in, "%c", &letra) != EOF) {

        if (letra == '{')
                parar = 1;

        if (parar == 0)
            fprintf(arq_out, "%c", letra);

        if (letra == '}')
            parar = 0;
    }
    
    fclose(arq_in); fclose(arq_out);

    return 0;
}
