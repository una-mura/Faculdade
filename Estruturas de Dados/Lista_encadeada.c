#include "stdio.h"
#include "stdlib.h"

typedef struct produto {
    int codigo;
    double preco;
    struct produto *proximo;
} produto;

void listar (produto *nodeAtual) {
    int i = 0;

    while (nodeAtual != NULL) {
        i++;
        printf("\n\nProduto número %d \n Codigo: %d\n Preço: R$ %.2lf", i, nodeAtual->codigo, nodeAtual->preco);
        nodeAtual = nodeAtual -> proximo;
    }
}

void inserir (produto **cabeca) {
    produto *nodeAtual, *nodeNovo;
    int codigo;
    double preco;

    printf("\n Código do novo produto: ");
    scanf("%d", &codigo);

    printf("\n Preço do produto: R$");
    scanf("%lf", &preco);

    if (*cabeca == NULL) {
        
        *cabeca = (produto *) malloc(sizeof(produto));
        (*cabeca) -> codigo = codigo;
        (*cabeca) -> preco = preco;
        (*cabeca) -> proximo = NULL;
    }
    else {
        nodeAtual = *cabeca;

        nodeNovo = (produto *) malloc(sizeof(produto));
        nodeNovo -> codigo = codigo;
        nodeNovo -> preco = preco;
        nodeNovo -> proximo = NULL;

        while (nodeAtual -> proximo != NULL) {
            
            nodeAtual = nodeAtual -> proximo;
        }

        nodeAtual -> proximo = nodeNovo;
    }
}

int main(void) {

    produto *cabeca = NULL;
    produto *nodeAtual;
    char q;

    do {
        
        printf("\n \nOpções: \nI -> para inserir novo produto; \nL -> para listar os produtos; \nS -> para sair \n:");
        scanf(" %c", &q);

        switch (q) {
            case 'i': case 'I': inserir(&cabeca); break;
            case 'l': case 'L': listar(cabeca); break;
            //case 'e': case 'E': excluir(cabeca); break;
            case 's': case 'S': break;
        
            default: printf("\n\n Opção inválida");
        }

    } while (q != 's' && q != 'S');

    nodeAtual = cabeca;

    while (nodeAtual != NULL) {
        
        cabeca = nodeAtual -> proximo;
        free(nodeAtual);
        nodeAtual = cabeca;
    }

    return 0;
}