#include "stdio.h"
#include "stdlib.h"

/*
Faça o algoritmo de uma função lógica para dizer se um determinado elemento x
aparece junto de um elemento y, nesta ordem, na lista encadeada simples de reais.
*/

typedef struct registro node;

//<função principal>

int lst_xy(node *lst, float x, float y) {

    node *p = lst;

    while (p -> prox != NULL) {
        
        p = p -> prox;

        if (p -> info == x) {

            if (p->prox -> info == y) {
                return 1;
            }
        } 
    }

    return 0;
}

struct registro {
    float info;
    node *prox;
};