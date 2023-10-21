#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int valor;
    struct node *proximo;
} node;

node *inserir(node *cabeca, int valor);
node *ordenar(node *cabeca);
void limpar(node **cabeca);
void mostrar(node *cabeca);

int main()
{
    node *lista = NULL;

    lista = inserir(lista, 100);
    lista = inserir(lista, 0);
    lista = inserir(lista, 90);
    lista = inserir(lista, 10);
    lista = inserir(lista, 80);
    lista = inserir(lista, 20);
    lista = inserir(lista, 70);
    lista = inserir(lista, 30);
    lista = inserir(lista, 60);
    lista = inserir(lista, 40);
    lista = inserir(lista, 50);
    lista = inserir(lista, 25);
    lista = inserir(lista, 75);

    printf("Lista desordenada: \n");
    mostrar(lista); printf("\n");

    ordenar(lista);

    printf("Lista ordenada: \n");
    mostrar(lista); printf("\n");

    limpar(&lista);

    return 0;
}

node *inserir(node *cabeca, int valor)
{
    if (cabeca == NULL)
    {
        cabeca = (node *) malloc(sizeof(node));
        cabeca -> valor = valor;
    }
    
    else
    {
        node *novoNo = (node *) malloc(sizeof(node));
        novoNo -> valor = valor;
        novoNo -> proximo = cabeca;
        cabeca = novoNo;
    }

    return cabeca;
}

node *ordenar(node *cabeca)
{
    node *atual = cabeca;

    while (atual != NULL)
    {
        node *minimo = atual;
        node *temp = atual -> proximo;

        while (temp != NULL)
        {
            if (temp -> valor < minimo -> valor)
            {
                minimo = temp;
            }
            
            temp = temp -> proximo;
        }
        
        int valorTemp = atual -> valor;
        atual -> valor = minimo -> valor;
        minimo -> valor = valorTemp;

        atual = atual -> proximo;
    }
    
}

void limpar(node **cabeca)
{
    if (*cabeca == NULL) {return;}

    limpar(&(*cabeca) -> proximo);
    free(*cabeca);
}

void mostrar(node *cabeca)
{
    if (cabeca == NULL) {return;}
    
    printf("%d ", cabeca -> valor);
    mostrar(cabeca -> proximo);
}