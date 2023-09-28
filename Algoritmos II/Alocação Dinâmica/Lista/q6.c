#include "stdio.h"
#include "stdlib.h"

/*
Faça o algoritmo de uma função que, a partir de duas listas simples
encadeadas, cria uma terceira lista que seja a união sem repetição 
dos elementos das duas primeiras.
*/

typedef struct registro node;
node *lst_insere(node *lst, int val);   // insere nós numa lista
int lst_repetido(node *lst, int val);   // verifica se o termo referenciado aparece na lista

node *lst_uniao(node *lst1, node *lst2) {

    node *lst3 = NULL;
    node *p1 = lst1;
    node *p2 = lst2;
    
    while (p1 != NULL) {
        
        lst3 = lst_insere(lst3, p1->info);
        p1 = p1 -> prox;
    }

    while (p2 != NULL) {
        
        if (!lst_repetido(lst3, p2->info))
            lst3 = lst_insere(lst3, p2->info);

        p2 = p2 -> prox;      
    }

    return lst3;
}

struct registro {
    int info;
    node *prox;
};

node *lst_insere(node *lst, int val) {

    node *novo = (node * ) malloc(sizeof(node));
    novo->info = val;
    novo->prox = lst;

    return novo;
}

int lst_repetido(node *lst, int val) {

    node *p = lst;

    while (p != NULL) {
        
        if (p -> info == val)
            return 1;

        p = p -> prox;
    }

    return 0;
}
