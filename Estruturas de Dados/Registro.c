#include "stdio.h"
#include "string.h"

typedef struct {
    char nome_fantasia[255];
    char cnpj[14];
    char endereco[255];
} fornecedor;

typedef struct {
    char nome[255];
    int codigo;
    float preco;
    fornecedor fornecedor_principal;
} produto;

int main(void) {

    produto produtos[5];
    char nome_produto[255], cnpj[255];
    float preco_filtragem = 20;

    for (int i = 0; i < 5; i++) {
        printf("Nome do Produto: "); 
        scanf("%s", nome_produto);
        strcpy(produtos[i].nome, nome_produto);

        printf("Preço do Produto: "); 
        scanf("%f", &preco_filtragem);
        produtos[i].preco = preco_filtragem;

        printf("CNPJ do Fornecedor: "); 
        scanf("%s", cnpj);
        strcpy(produtos[i].fornecedor_principal.cnpj, cnpj);
    }    

    for (int i = 0; i < 5; i++) {

        if (produtos[i].preco >= preco_filtragem)
            if (!strcmp(produtos[i].fornecedor_principal.cnpj, "1"))
                printf("%s\n", produtos[i].nome);
    }
    
    return 0;
}