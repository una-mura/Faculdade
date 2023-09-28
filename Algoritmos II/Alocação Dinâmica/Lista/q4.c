#include "stdio.h"
#include "stdlib.h"

/*
Faça o algoritmo de uma função que retorne a 
quantidade de elementos da lista.
*/

typedef struct registro node;

int lst_qtd(node *lst) {

    node *p = lst;
    int qtd = 0;

    while (p != NULL) {
        qtd = qtd + 1;
        p = p -> prox;
    }

    return qtd;
}

struct registro {
    int info;
    node *prox;
};