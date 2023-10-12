#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *esquerdo;
    struct node *direito;
} node;

void varredura(node *raiz);
void limpeza(node **raiz);

int main()
{
    

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
