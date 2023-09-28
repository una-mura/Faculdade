#include <stdio.h>

int main() {

    FILE *arq; 
    char aux;
    int cont = 0;

    arq = fopen("a.txt", "r");

    if (arq == NULL)
        printf("Erro durante a abertura do arquivo.\n");
    else {
        
        while (fscanf(arq, "%c", &aux) != EOF)
            cont++;
    
        fclose(arq);
        printf("Quantidade de caracteres do arquivo: %d\n", cont);
    }

    return 0;
}
