#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct node
{
    int info;
    struct node *proximo;
    struct node *anterior;
} node;

void encontraElemento(node *cabeca, int elemento); //função pedida pelo exercício
void insereElemento(node **cabeca, int elemento);
void destroiLista(node **cabeca);
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
        printf("E -> Encontra elemento\n");
        printf("M -> Mostra elementos\n");
        printf("S -> Sair do programa\n");

        printf("\nSeleção: "); scanf(" %c", &opcao);
        opcao = tolower(opcao);

        if (opcao == 'i')
        {
            printf("\nElemento a ser inserido: ");
            scanf("%d", &elemento);
            insereElemento(&cabeca, elemento);
        }

        else if (opcao == 'e') {
            printf("\nElemento a ser buscado: ");
            scanf("%d", &elemento);
            encontraElemento(cabeca, elemento);
        }

        else if (opcao == 'm')
            mostraLista(cabeca);

        else if (opcao == 's')
            break;

        else
            printf("Seleção inválida\n");
    }

    destroiLista(&cabeca);
    
    return 0;
}

void encontraElemento(node *cabeca, int elemento)
{
    int i = 1;

    while (cabeca != NULL && cabeca -> info != elemento)
    {
        cabeca = cabeca -> proximo;
        i++;
    }

    if (cabeca -> info == elemento)
        printf("Elemento encontrado no %dº nó\n", i);

    else
        printf("Elemento não encontrado\n");
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
