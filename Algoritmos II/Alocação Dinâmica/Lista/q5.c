#include "stdio.h"
#include "stdlib.h"

/*
Faça o algoritmo de uma função lógica que inclua um elemento na posição i 
de uma lista.
*/

typedef struct registro node;

int lst_insere(node *lst, int pos, int val) {

    node *p = lst;
    node *q = (node * ) malloc(sizeof(node));
    q -> info = val;
    int i = 0;

    while (p -> prox != NULL) {
        p = p -> prox;
        i++;
    }
    
    if (i == pos) {
        
        q -> prox = p -> prox;
        p -> prox = q;
        return 1;
    }

    return 0;
}

struct registro {
    int info;
    node *prox;
};