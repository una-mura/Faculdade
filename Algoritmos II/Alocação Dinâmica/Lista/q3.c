#include "stdio.h"
#include "stdlib.h"

/*
Faça o algoritmo de um procedimento que esvazie uma lista
*/

typedef struct registro node;

void lst_libera(node *lst) {

    node *p = lst;  //ponteiro para percorrer a lista
    node *temp;     //ponteiro que guarda o próximo elemento

    while (p != NULL) {
        
        temp = p -> prox;
        free(p);
        p = temp;
    }
}

struct registro {
    int info;
    node *prox;
};