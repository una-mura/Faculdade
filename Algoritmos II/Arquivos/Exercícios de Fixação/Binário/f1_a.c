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
    int cont, qtd;

    printf("Qual a quantidade de bolsistas a registrar?\nQuantidade: ");
    scanf("%d", &qtd);

    while (qtd < 5) {
        printf("Número de bolsistas deve ser cinco ou mais! Digite novamente: ");
        scanf("%d", &qtd);
    }
    
    arq = fopen("bolsista1.cad", "wb");

    if (arq == NULL)
        printf("Não foi possível abrir o arquivo.");
    else {

        for (cont = 1; cont <= qtd; cont++) {

            printf("\nCódigo (1 - 25): ");
            scanf("%d", &bolsista.codigo);

            while (bolsista.codigo < 1 || bolsista.codigo > 25) {
                printf("Código deve ser menor que 25! Digite novamente: ", );
                scanf("%d", &bolsista.codigo);
            }

            printf("Nome (Limite de 30 caracteres): ");
            scanf(" %[^\n]", bolsista.nome);

            printf("Tipo de Bolsa (1 - Trabalho/ 2 - Iniciação/ 3 - Pesquisa): ");
            scanf("%d", &bolsista.tipo_bolsa);

            printf("E-mail (Limite de 30 caracteres): ");
            scanf("%s", bolsista.email);

            fwrite(&bolsista, sizeof(struct tBolsista), 1, arq);
        }

        fclose(arq);
    }

    return 0;
}
