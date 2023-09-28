#include "stdio.h"
#include "stdlib.h"

/*Teste pra entender Listas Dinâmicas Encadeadas*/

typedef struct registro node;           //definição de tipo Node
node *lst_insere(node *lst, int val);   //insere um elemento na lista
node *lst_retira(node *lst, int val);   //retira um elemento da lista
node *busca (node *lst, int v);         //busca um elemento da lista
int lst_vazia (node *lst);              //verifica se a lista é vazia
void lst_imprime(node *lst);            //imprime os valores da lista
void lst_libera(node *lst);             //libera a lista da memória

int main() {

    int num, conf = 1;
    node *lst = NULL;

    while (conf) {
        
        printf("numero: ");
        scanf("%d", &num);

        lst = lst_insere(lst, num);

        printf("inserir mais? (1. sim | 0. nao): ");
        scanf("%d", &conf);
    }
    
    if (lst_vazia(lst))
        printf("lista vazia\n");

    else {
        printf("\n");
        lst_imprime(lst);
    }

    if (busca(lst, 2) != NULL) {

        lst = lst_retira(lst, 2);
        printf("\n");
        lst_imprime(lst);
    }
    
    else 
        printf("\nnão foi possível achar 2\n");
    
    lst_libera(lst);

    return 0;
}

//funções e struct

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

void lst_imprime(node *lst) {

    node *p = lst; //ponteiro para percorrer a lista

    while (p != NULL) {
        
        printf("numero = %d\n", p -> info);
        p = p -> prox;
    }
}

int lst_vazia (node *lst) {
    return (lst == NULL);
}

node *busca (node *lst, int v) {

    node *p = lst; //ponteiro para percorrer a lista

    while (p != NULL && p -> info != v)
        p = p -> prox;

    return p; //se p == NULL, não encontrou o elemento
}

node *lst_retira(node *lst, int val) {

    node *a = NULL; //ponteiro para elemento anterior
    node *p = lst;  //ponteiro para percorrer a lista

    while (p != NULL && p -> info != val) {
        
        a = p;
        p = p -> prox;
    }

    if (p != NULL) {

        if (a == NULL)
            lst = p -> prox;
        else
            a -> prox = p -> prox;

        free(p);
    }

    return lst;
}

void lst_libera(node *lst) {

    node *p = lst;  //ponteiro para percorrer a lista
    node *temp;     //ponteiro que guarda o próximo elemento

    while (p != NULL) {
        
        temp = p -> prox;
        free(p);
        p = temp;
    }
}