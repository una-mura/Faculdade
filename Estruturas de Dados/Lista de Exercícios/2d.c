#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct node
{
    int info;
    struct node *proximo;
    struct node *anterior;
} node;

node *copiaLista(node **original); //função pedida pelo exercício
void insereElemento(node **cabeca, int elemento);
void destroiLista(node **cabeca);
void mostraLista(node *cabeca);

int main()
{
    node *cabeca1 = NULL;
    node *cabeca2 = NULL;
    char opcao = '\0';
    int elemento;

    while (1)
    {
        printf("\nOpções\n\n");

        printf("I -> Inserir elemento\n");
        printf("M -> Mostrar lista\n");
        printf("S -> Sair da lista\n");

        printf("\nSeleção: "); scanf(" %c", &opcao);
        opcao = tolower(opcao);

        if (opcao == 'i')
        {
            printf("\nElemento a ser inserido: ");
            scanf("%d", &elemento);
            insereElemento(&cabeca1, elemento);
        }

        else if (opcao == 'm')
            mostraLista(cabeca1);

        else if (opcao == 's')
            break;

        else
            printf("Seleção inválida\n");
    }

    cabeca2 = copiaLista(&cabeca1);
    mostraLista(cabeca1);
    mostraLista(cabeca2);
    
    return 0;
}

node *copiaLista(node **original)
{
    node *aux1 = *original;
    node *aux2 = NULL;
    node *copia = NULL;

    while (aux1 != NULL)
    {
        node *novoNode = (node *) malloc(sizeof(node));
        novoNode -> info = aux1 -> info;
        novoNode -> anterior = aux2;
        novoNode -> proximo = NULL;

        if (copia == NULL)
            copia = novoNode;

        else
            aux2 -> proximo = novoNode;

        aux2 = novoNode;
        aux1 = aux1 -> proximo;
    }

    return copia;
}


void insereElemento(node **cabeca, int elemento)
{
    node *novoNode = (node *) malloc(sizeof(node));
    novoNode -> info = elemento;
    novoNode -> proximo = NULL;
    novoNode -> anterior = NULL;

    if (*cabeca == NULL)
        *cabeca = novoNode;
    
    else
    {
        node *aux = *cabeca;

        while (aux -> proximo != NULL)
        {
            aux = aux -> proximo;
        }

        aux -> proximo = novoNode;
        novoNode -> anterior = aux;
    }
}

void destroiLista(node **cabeca) 
{
    while (*cabeca != NULL)
    {
        node *temp = *cabeca;
        *cabeca = (*cabeca) -> proximo;
        free(temp);
    }
}

void mostraLista(node *cabeca)
{
    node *temp = cabeca;

    printf("\n");

    while (temp != NULL) 
    {
        printf("%d -> ", temp -> info);
        temp = temp -> proximo;
    }

    printf("NULL\n");
}