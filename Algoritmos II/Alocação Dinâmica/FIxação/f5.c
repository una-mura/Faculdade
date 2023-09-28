#include "stdio.h"
#include "stdlib.h"

//Faça o algoritmo de uma função que inclua um elemento no final de uma lista

typedef struct elemento node;
node *lst_insere(node *lst, int val);

//<função principal>

node *lst_insere(node *lst, int val) {

    node *p = lst;  //ponteiro para percorrer a lista
    node *novo = (node * ) malloc(sizeof(node));

    novo -> info = val;
    novo -> prox = NULL;

    if (lst == NULL)
        lst = novo;

    else {

        while (p -> prox != NULL)
            p = p -> prox;

        p -> prox = novo;
    }
    
    return lst;
}

struct elemento {

    int info;
    node *prox;
};
