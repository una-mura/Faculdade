#include "stdio.h"
#include "stdlib.h"

//Faça o algoritmo recursivo de uma função que retorne a quantidade de elementos da lista

typedef struct elemento node;
int lst_qtd(node *lst);

//<função principal>

int lst_qtd(node* lst) {

    if (lst == NULL)
        return 0;
    else
        return lst_qtd(lst -> prox) + 1;
}

struct elemento {

    int info;
    node *prox;
};