#include "stdio.h"
#include "stdlib.h"

/* 
Faça o algoritmo de uma função lógica que inclua um elemento ao final
de uma lista 
*/

typedef struct registro node;

int lst_insere(node *lst, int val) {
    
    node *p = lst;
    node *novo = (node * ) malloc(sizeof(node));

    novo -> info = val;
    novo -> prox = NULL;
    
    if (lst == NULL)
        lst = novo;

    else {
        
        while (p -> prox != NULL)    
            p = p -> info;   

        p -> prox = novo;
    }

    return 1;
}

struct registro {
    int info;
    node *prox;
};