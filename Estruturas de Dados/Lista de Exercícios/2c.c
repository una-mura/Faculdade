#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct node
{
    int info;
    struct node *proximo;
    struct node *anterior;
} node;

node *divideLista(node **cabeca); //função pedida pelo exercício
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

    cabeca2 = divideLista(&cabeca1);
    mostraLista(cabeca1);
    mostraLista(cabeca2);

    destroiLista(&cabeca1);
    destroiLista(&cabeca2);
    
    return 0;
}

node *divideLista(node **cabeca)
{
    node *aux = *cabeca;
    int i;

    for (i = 0; aux != NULL; i++)
        aux = aux -> proximo;
    
    aux = *cabeca;
    for (int j = 0; j < (int) (i / 2); j++)
        aux = aux -> proximo;

    aux -> anterior -> proximo = NULL;
    return aux;
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