#include "stdio.h"
#include "stdlib.h"

/*
Faça o algoritmo de uma função inteira que retorne a posição de um determinado
elemento x real em na lista encadeada simples. Retorne -1 em caso de erro.
*/

typedef struct registro node;

int lst_posicao(node *lst, int val) {

    node *p = lst;
    int i = 0;

    while (p != NULL) {
        
        if (p -> info == val)
            return i;

        p = p -> prox;
        i = i + 1;
    }

    return -1;
}

struct registro {
    int info;
    node *prox;
};