#include <stdio.h>

typedef struct tBolsista {
    char nome[30];
    char email[30];
    int codigo;
    int tipo_bolsa;
} info;

int main() {

    FILE *arq;
    info bolsista;

    arq = fopen("bolsista1.cad", "rb");

    while (!feof(arq)) {

        if (fread(&bolsista, sizeof(struct tBolsista), 1, arq)) {

            printf("Código: %d\n", bolsista.codigo);
            printf("Nome: %s\n", bolsista.nome);
            printf("Tipo de Bolsa: %d\n", bolsista.tipo_bolsa);
            printf("E-mail: %s\n", bolsista.email);
            printf("\n");
        }
    }

    fclose(arq);

    return 0;
}
