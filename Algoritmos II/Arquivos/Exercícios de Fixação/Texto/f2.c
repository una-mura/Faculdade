#include <stdio.h>

int main() {
    
    FILE *arq1, *arq2;
    char let;

    arq1 = fopen("texto.txt", "r");
    arq2 = fopen("resumo.txt", "w");

    if ((arq1 == NULL) || (arq2 == NULL)) {
        printf("Erro durante a abertura do arquivo.\n");
    }
    else {

        while (fscanf(arq1, "%c", &let) != EOF) {
            if ((let >= 'a' && let <= 'z') || (let >= 'A' && let <= 'Z')) {
                fprintf(arq2, "%c", let);
            }
        }
    }
    
    fclose(arq1);
    fclose(arq2);

    return 0;
}
