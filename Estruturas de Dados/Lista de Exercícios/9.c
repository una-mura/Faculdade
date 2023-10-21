#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct node
{
    int info;
    struct node *esquerdo;
    struct node *direito;
} node;

node *inserir(node *raiz, int valor);
void limpar(node **raiz);
void mostrar(node *raiz, int nivel);
int somaNiveisImpares(node *raiz, int nivel); //função pedida pelo exercício

int main()
{
    node *raiz = NULL;
    char opcao = '\0';
    int elemento;

    while (1)
    {
        printf("\nOpções\n\n");

        printf("I -> Inserir elemento\n");
        printf("S -> Sair do programa\n");

        printf("\nSeleção: "); 
        scanf(" %c", &opcao);
        opcao = tolower(opcao);

        if (opcao == 'i')
        {
            printf("\nElemento a ser inserido: ");
            scanf("%d", &elemento);
            raiz = inserir(raiz, elemento);
        }

        else if (opcao == 's')
            break;

        else
            printf("Seleção inválida\n");
    }

    printf("Elementos contidos em nós ímpares da árvore: "); mostrar(raiz, 0);
    printf("\nSoma dos elementos contidos nos nós ímpares da árvore: %d\n", somaNiveisImpares(raiz, 0));

    limpar(&raiz);

    return 0;
}

node *inserir(node *raiz, int valor)
{
    if (raiz == NULL)
    {
        raiz = (node *) malloc(sizeof(node));
        raiz -> info = valor;
        raiz -> direito = NULL;
        raiz -> esquerdo = NULL;
    }

    else if (valor < raiz -> info)
    {
        raiz -> esquerdo = inserir(raiz -> esquerdo, valor);
    }

    else if (valor > raiz -> info)
    {
        raiz -> direito = inserir(raiz -> direito, valor);
    }

    else
        printf("O número já existe\n");
        
    return raiz;
}

void limpar(node **raiz)
{
    if (*raiz != NULL)
    {
        limpar(&((*raiz) -> esquerdo));
        limpar(&((*raiz) -> direito));
        free(*raiz);
        *raiz = NULL; 
    }
}

void mostrar(node *raiz, int nivel)
{
    if (raiz != NULL)
    {
        if (nivel % 2 == 1)
        {
            printf("%d ", raiz -> info);
        }

        mostrar(raiz -> esquerdo, nivel++);
        mostrar(raiz -> direito, nivel++);
    }
}

int somaNiveisImpares(node *raiz, int nivel)
{
    if (raiz == NULL) {return 0;}

    else
    {
        if (nivel % 2 == 1)
        {
            return raiz -> info + somaNiveisImpares(raiz -> esquerdo, nivel++) + somaNiveisImpares(raiz -> direito, nivel++);
        }

        else
        {
            return somaNiveisImpares(raiz -> esquerdo, nivel++) + somaNiveisImpares(raiz -> direito, nivel++);
        }
    }
}
