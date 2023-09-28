#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
Escreva um algoritmo que recebe uma lista duplamente encadeada e inverte essa lista,
alterando somente os campos dos ponteiros e sem usar estruturas auxiliares.
*/

typedef struct node
{
    int info;
    struct node *proximo;
    struct node *anterior;
} node;

void insereElemento(node **cabeca, int elemento);
void destroiLista(node **cabeca);
void inverteLista(node **cabeca);
void mostraLista(node *cabeca);

int main()
{
    node *cabeca = NULL;
    char opcao = '\0';
    int elemento;

    while (1)
    {
        printf("\nOpções\n\n");

        printf("I -> Inserir elemento\n");
        printf("M -> Mostra elementos\n");
        printf("S -> Sair do programa\n");

        printf("\nSeleção: "); 
        scanf(" %c", &opcao);
        opcao = tolower(opcao);

        if (opcao == 'i')
        {
            printf("\nElemento a ser inserido: ");
            scanf("%d", &elemento);
            insereElemento(&cabeca, elemento);
        }

        else if (opcao == 'm')
            mostraLista(cabeca);

        else if (opcao == 's')
            break;

        else
            printf("Seleção inválida\n");
    }

    inverteLista(&cabeca);
    mostraLista(cabeca);
    destroiLista(&cabeca);

    return 0;
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

void inverteLista(node **cabeca)
{
    node *atual = *cabeca;
    node *novaCabeca = NULL;

    while (atual != NULL)
    {
        node *temp = atual -> proximo;
        atual -> proximo = novaCabeca;
        atual -> anterior = temp;

        novaCabeca = atual;
        atual = atual -> anterior;
    }

    *cabeca = novaCabeca;
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