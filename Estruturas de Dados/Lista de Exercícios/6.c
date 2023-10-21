#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct node
{
    int info;
    struct node *esquerdo;
    struct node *direito;
} node;

int arvoreEspelho(node *raizA, node *raizB);
void limpar(node **raiz);

int main()
{

    node *raizA = (node *) malloc(sizeof(node));
    node *raizB = (node *) malloc(sizeof(node));
    node *raizC = (node *) malloc(sizeof(node));

    //árvore 1 para teste

    raizA -> info = 1;

    raizA -> esquerdo = (node *) malloc(sizeof(node));
    raizA -> esquerdo -> info = 2;

    raizA -> direito = (node *) malloc(sizeof(node));
    raizA -> direito -> info = 3;

    raizA -> esquerdo -> esquerdo = (node *) malloc(sizeof(node));
    raizA -> esquerdo -> esquerdo -> info = 4;

    raizA -> esquerdo -> direito = (node *) malloc(sizeof(node));
    raizA -> esquerdo -> direito -> info = 5;

    //árvore 2 para teste

    raizB -> info = 1;

    raizB -> esquerdo = (node *) malloc(sizeof(node));
    raizB -> esquerdo -> info = 3;

    raizB -> direito = (node *) malloc(sizeof(node));
    raizB -> direito -> info = 2;

    raizB -> direito -> direito = (node *) malloc(sizeof(node));
    raizB -> direito -> direito -> info = 4;

    raizB -> direito -> esquerdo = (node *) malloc(sizeof(node));
    raizB -> direito -> esquerdo -> info = 5;

    //árvore 3 para teste

    raizC -> info = 1;

    raizC -> direito = (node *) malloc(sizeof(node));
    raizC -> direito -> info = 2;

    raizC -> direito -> direito = (node *) malloc(sizeof(node));
    raizC -> direito -> direito -> info = 3;

    if (arvoreEspelho(raizA, raizB))
        printf("São árvores espelho\n");

    else
        printf("Não são árvores espelho\n");
    
    if (arvoreEspelho(raizA, raizC))
        printf("São árvores espelho\n");

    else
        printf("Não são árvores espelho\n");

    limpar(&raizA); limpar(&raizB); limpar(&raizC);

    return 0;
}

int arvoreEspelho(node *raizA, node *raizB)
{
    if (raizA == NULL && raizB == NULL)
        return 1;

    if (raizA != NULL && raizB != NULL && raizA -> info == raizB -> info)
    {
        return arvoreEspelho(raizA -> esquerdo, raizB -> direito) && arvoreEspelho(raizA -> direito, raizB -> esquerdo);
    }
    
    return 0;
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