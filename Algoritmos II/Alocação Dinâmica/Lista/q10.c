#include "stdio.h"
#include "stdlib.h"

/*
Faça o algoritmo de uma função lógica [iterativa/recursiva] que diz se todos os
elementos de uma lista simplesmente encadeada ordenada de reais encontram-se
contidos em outra lista simplesmente encadeada também ordenada.
*/

typedef struct registro node;

//<função principal>

int lst_sublista(node *lst, node *sub_lst) {

    node *p = lst;
    node *q = sub_lst;

    if (q == NULL)
        return 1;
    
    else if (p == NULL)
        return 0;

    else {

        if (p -> info == q -> info)
            return 0 + lst_sublista(p ->prox, q->prox);

        else
            return 0 + lst_sublista(p, q->prox);
    }
}

struct registro {
    float info;
    node *prox;
};

