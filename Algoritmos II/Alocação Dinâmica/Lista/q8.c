#include "stdio.h"
#include "stdlib.h"

/*
Faça o algoritmo de uma função real [iterativa/recursiva] para retornar a média
aritmética simples dos valores inteiros de uma lista encadeada simples. Retorne 0 no
caso da lista estar vazia.
*/

typedef struct registro node;

double lst_media(node *lst) {

    node *p = lst;
    int i = 0, med = 0;

    while (p != NULL) {
        
        med = med + p -> info;
        p = p -> prox;
        i = i + 1;
    }        

    if (i == 0)
        return i;
    else
        return ((double) med / i);
}

struct registro {
    int info;
    node *prox;
};