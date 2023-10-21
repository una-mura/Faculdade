#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct node
{
    int info;
    struct node *proximo;
    struct node *anterior;
} node;

void concatenaListas(node **lista1, node **lista2); //função pedida pelo exercício
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
        printf("\nOpções (Lista 1)\n\n");

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

    while (1)
    {
        printf("\nOpções (Lista 2)\n\n");

        printf("I -> Inserir elemento\n");
        printf("M -> Mostrar lista\n");
        printf("S -> Sair da lista\n");

        printf("\nSeleção: "); scanf(" %c", &opcao);
        opcao = tolower(opcao);

        if (opcao == 'i')
        {
            printf("\nElemento a ser inserido: ");
            scanf("%d", &elemento);
            insereElemento(&cabeca2, elemento);
        }

        else if (opcao == 'm')
            mostraLista(cabeca2);

        else if (opcao == 's')
            break;

        else
            printf("Seleção inválida\n");
    }

    if (cabeca1 != NULL && cabeca2 != NULL)
        concatenaListas(&cabeca1, &cabeca2);

    mostraLista(cabeca1);
    destroiLista(cabeca1);
    
    return 0;
}

void concatenaListas(node **lista1, node **lista2)
{
    node *aux = *lista1;
    while (aux -> proximo != NULL)
        aux = aux -> proximo;

    aux -> proximo = *lista2;
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