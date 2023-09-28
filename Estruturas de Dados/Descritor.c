#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct node
{
    int info;
    struct node *proximo;
} node;

typedef struct descritor 
{
    int tamanho;
    node *cabeca;
    node *cauda;
} descritor;

node *criaNo();
void atualizaDescritor(descritor *desc, node *no);
void inserir(descritor *desc, node **cabeca);
void remover(descritor *desc, node **cabeca);
void destruir(descritor *desc, node **cabeca);
void imprimir(node *no);

int main()
{
    descritor *desc = (descritor *) malloc(sizeof(descritor));
    node *cabeca = NULL;
    char q;

    do {
        printf("\nOpções:\n\nI -> para inserir\nR -> para remover\nD -> para destruir\nL -> para imprimir\nS -> para sair\n\n:");
        scanf(" %c", &q);
        q = tolower(q);

        switch (q) {
            case 'i': inserir(desc, &cabeca); break;
            case 'r': remover(desc, &cabeca); break;
            case 'd': destruir(desc, &cabeca); break;
            case 'l': imprimir(cabeca); break;
            case 's': break;
            default: printf("\nOpção inválida\n");
        }

    } while (q != 's');
    
    free(desc);
    return 0;
}

void atualizaDescritor(descritor *desc, node *no) 
{
    desc->tamanho = 0;
    desc->cabeca = no;
    node *percorrer = no;

    while (percorrer != NULL) {
        desc->tamanho++;
        desc->cauda = percorrer;
        percorrer = percorrer->proximo;
    }
}

node *criaNo()
{
    node *no = (node *) malloc(sizeof(node));

    printf("Informação do nó: "); 
    scanf("%d", &no->info);
    no->proximo = NULL;

    return no;
}

void inserir(descritor *desc, node **cabeca)
{
    node *nodeNovo = criaNo();

    if (*cabeca == NULL) {
        *cabeca = nodeNovo;
    }
    else {
        node *nodeAtual = *cabeca; 

        while (nodeAtual->proximo != NULL)
            nodeAtual = nodeAtual->proximo;
         
        nodeAtual->proximo = nodeNovo;
    }

    atualizaDescritor(desc, *cabeca);
}

void remover(descritor *desc, node **cabeca)
{
    int numNode;
    node *temp = *cabeca;

    printf("Escolha número de 1 a %d: ", desc->tamanho);
    scanf("%d", &numNode);

    if (numNode >= 1 && numNode <= desc->tamanho) {
        if (numNode == 1) {
            *cabeca = (*cabeca)->proximo;
            free(temp);
        }
        else if (numNode == desc->tamanho) {
            while (temp->proximo->proximo != NULL)
                temp = temp->proximo;
            
            free(temp->proximo);
            temp->proximo = NULL;
        }
        else {
            for (int i = 1; i < numNode - 1; i++)
                temp = temp->proximo;

            node *aux = temp->proximo;
            temp->proximo = temp->proximo->proximo;
            free(aux);
        }
        printf("Nó removido com sucesso.\n");
    }
    else {
        printf("Número fora do intervalo.\n");
    }

    atualizaDescritor(desc, *cabeca);
}

void destruir(descritor *desc, node **cabeca) 
{
    while (*cabeca != NULL) {
        node *temp = *cabeca;
        *cabeca = (*cabeca)->proximo;
        free(temp);
    }

    atualizaDescritor(desc, *cabeca);
    printf("Lista destruída.\n");
}

void imprimir(node *no) 
{
    if (no == NULL) 
    {
        printf("\nA lista está vazia.\n");
    }
    else 
    {
        printf("\nElementos da lista:\n");

        node *temp = no;

        while (temp != NULL) {
            printf("%d -> ", temp->info);
            temp = temp->proximo;
        }

        printf("NULL\n");
    }
}
