#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *esq;
    struct node *dir;
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
        
    }   
}

void limpeza(node **raiz)
{
    if (*raiz != NULL) {
        limpeza(&((*raiz) -> esq));
        limpeza(&((*raiz) -> dir));
        free(raiz);
    }
}
