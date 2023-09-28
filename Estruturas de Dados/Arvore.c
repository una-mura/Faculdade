#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *direito;
    struct node *esquerdo;
} node;

void varredura(node *raiz);
void limpeza(node **raiz);

int main()
{
    node *raiz = (node *) malloc(sizeof(node));

    raiz -> info = 0;
    raiz -> direito = (node *) malloc(sizeof(node));
    raiz -> direito -> info = 1;
    raiz -> esquerdo = (node *) malloc(sizeof(node));
    raiz -> esquerdo -> info = 2;

    raiz -> direito -> direito = (node *) malloc(sizeof(node));
    raiz -> direito -> direito -> info = 3;
    raiz -> direito -> direito -> direito = NULL;
    raiz -> direito -> direito -> esquerdo = NULL;

    raiz -> direito -> esquerdo = (node *) malloc(sizeof(node));
    raiz -> direito -> esquerdo -> info = 4;
    raiz -> direito -> esquerdo -> direito = NULL;
    raiz -> direito -> esquerdo -> esquerdo = NULL;


    raiz -> esquerdo -> direito = (node *) malloc(sizeof(node));
    raiz -> esquerdo -> direito -> info = 5;
    raiz -> esquerdo -> direito -> direito = NULL;
    raiz -> esquerdo -> direito -> esquerdo = NULL;

    raiz -> esquerdo -> esquerdo = (node *) malloc(sizeof(node));
    raiz -> esquerdo -> esquerdo -> info = 6;
    raiz -> esquerdo -> esquerdo -> direito = NULL;
    raiz -> esquerdo -> esquerdo -> esquerdo = NULL;

    varredura(raiz);
    limpeza(&raiz);

    return 0;
}

void varredura(node *raiz)
{
    if (raiz != NULL)
    {
        varredura(raiz -> esquerdo);
        printf("%d\n", raiz -> info);
        varredura(raiz -> direito);
    }   
}

void limpeza(node **raiz)
{
    if (*raiz != NULL) {
        limpeza(&((*raiz) -> esquerdo));
        limpeza(&((*raiz) -> direito));
        free(raiz);
    }
}

