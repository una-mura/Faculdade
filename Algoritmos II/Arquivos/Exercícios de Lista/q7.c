#include <stdio.h>

//Escrever uma função que contabilize o número de vogais presentes em um arquivo de texto.

int vogais(FILE *a) {

    char letra, nome[30];
    int contador = 0;

    printf("Insira o local do arquivo: ");
    scanf("%s", nome);

    a = fopen(nome, "r");

    if (a == NULL) {
        return 0;
    }

    while (fscanf(a, "%c", letra)) {
        
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
            contador++;
    }

    fclose(a);

    return contador;
}
