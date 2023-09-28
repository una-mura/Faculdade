#include "stdio.h"
#include "stdlib.h"

/*
Faça o algoritmo de um procedimento que exclua de uma lista de inteiros, 
todos os elementos que tenham o mesmo valor passado como parâmetro.
*/

typedef struct registro node;

void *lst_retira(node *lst, int val) {

    node *a = NULL; //ponteiro para elemento anterior
    node *p = lst;  //ponteiro para percorrer a lista

    while (p != NULL) {
        
        if (p -> info == val) {

            if (a == NULL) {

                lst = lst -> prox;
                free(p);
                p = lst;
            }

            else {

                a -> prox = p -> prox;
                free(p);
                p = a -> prox;
            }
        }

        else {

            a = p;
            p = p -> prox;
        }
    }
}

struct registro {
    int info;
    node *prox;
};