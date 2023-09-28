#include "stdio.h"
#include "stdlib.h"

//Faça o algoritmo de uma função que retorne a quantidade de elementos da lista

typedef struct elemento node;
int lst_qtd(node *lst);

//<função principal>

int lst_qtd(node *lst) {

    int qtd = 0;
    node *p = lst;

    while (p != NULL) {
        p = p -> prox;
        qtd++;
    }

    return qtd;
}

struct elemento {

    int info;
    node *prox;
};