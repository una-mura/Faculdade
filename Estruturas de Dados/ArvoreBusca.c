#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *esquerdo;
    struct node *direito;
} node;

node *inicializar(node *raiz);
node *inserir(node *raiz, int valor);

void limpar(node **raiz);
void mostrar(node *raiz);

int main()
{
    node *raiz = NULL;

    

    return 0;
}

node *inicializar(node *raiz)
{
    raiz = (node *) malloc(sizeof(node));
    raiz -> direito = NULL;
    raiz -> esquerdo = NULL;

    return raiz;
}

node *inserir(node *raiz, int valor)
{
    if (raiz != NULL)
    {
        if (raiz -> info > valor)
        {
            if (raiz -> esquerdo == NULL)
            {
                inicializar(raiz -> esquerdo);
                raiz -> esquerdo -> info = valor;
            }

            else
            {
                inserir(raiz -> esquerdo, valor);
            }
        }

        else if (raiz -> info < valor)
        {
            if (raiz -> direito == NULL)
            {
                inicializar(raiz -> direito);
                raiz -> direito -> info = valor;
            }

            else
            {
                inserir(raiz -> direito, valor);
            }
        }

        else
        {
            printf("O número já existe\n");
        }
    }

    else
    {
        raiz = inicializar(raiz);
        raiz -> info = valor;
    }

    return raiz;
}

void limpar(node **raiz)
{
    if (*raiz != NULL) {
        limpar(&((*raiz) -> esquerdo));
        limpar(&((*raiz) -> direito));
        free(raiz);
    }
}

void mostrar(node *raiz)
{
    if (raiz != NULL)
    {
        mostrar(raiz -> esquerdo);
        printf("%d\n", raiz -> info);
        mostrar(raiz -> direito);
    }
}
