#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct node
{
    int info;
    struct node *esquerdo;
    struct node *direito;
} node;

node *inserir(node *raiz, int valor);
void limpar(node **raiz);
void mostrar(node *raiz, int opcao); //função pedida pelo exercício

int main()
{
    node *raiz = NULL;
    char opcao = '\0';
    int elemento;

    while (1)
    {
        printf("\nOpções\n\n");

        printf("I -> Inserir elemento\n");
        printf("M -> Mostrar elementos\n");
        printf("S -> Sair do programa\n");

        printf("\nSeleção: "); 
        scanf(" %c", &opcao);
        opcao = tolower(opcao);

        if (opcao == 'i')
        {
            printf("Digite o elemento a ser inserido na árvore: ");
            scanf("%d", &elemento);
            raiz = inserir(raiz, elemento);
        }

        else if (opcao == 'm') 
        {
            printf("Elementos na árvore em ordem: ");
            mostrar(raiz, 1); printf("\n");

            printf("Elementos na árvore pré-ordem: ");
            mostrar(raiz, 2); printf("\n");

            printf("Elementos na árvore pós-ordem: ");
            mostrar(raiz, 3); printf("\n");
        }

        else if (opcao == 's')
            break;

        else
            printf("Seleção inválida\n");
    }

    limpar(&raiz); 
    return 0;
}

node *inserir(node *raiz, int valor)
{
    if (raiz == NULL)
    {
        raiz = (node *) malloc(sizeof(node));
        raiz -> info = valor;
        raiz -> direito = NULL;
        raiz -> esquerdo = NULL;
    }

    else if (valor < raiz -> info)
    {
        raiz -> esquerdo = inserir(raiz -> esquerdo, valor);
    }

    else if (valor > raiz -> info)
    {
        raiz -> direito = inserir(raiz -> direito, valor);
    }

    else
        printf("O número já existe\n");
        
    return raiz;
}

void limpar(node **raiz)
{
    if (*raiz != NULL)
    {
        limpar(&((*raiz) -> esquerdo));
        limpar(&((*raiz) -> direito));
        free(*raiz);
        *raiz = NULL; 
    }
}

void mostrar(node *raiz, int opcao)
{
    if (raiz == NULL) return;

    node *pilha[100];
    node *atual = raiz;
    int topo = -1;

    if (opcao == 1)
    {
        while (atual != NULL || topo >= 0)
        {
            while (atual != NULL)
            {
                topo = topo + 1;
                pilha[topo] = atual;
                atual = atual -> esquerdo;
            }

            atual = pilha[topo];
            topo = topo - 1;

            printf("%d ", atual -> info);
            atual = atual -> direito;
        }
    }

    else if (opcao == 2)
    {
        topo = topo + 1;
        pilha[topo] = atual;

        while (topo >= 0)
        {
            atual = pilha[topo];
            topo = topo - 1;
            printf("%d ", atual -> info);

            if (atual -> direito != NULL)
            {
                topo = topo + 1;
                pilha[topo] = atual -> direito;
            }
            
            if (atual -> esquerdo != NULL)
            {
                topo = topo + 1;
                pilha[topo] = atual -> esquerdo;
            }
        }
    }

    else if (opcao == 3)
    {
        node *recente = NULL;

        while (1)
        {
            while (atual != NULL)
            {
                topo = topo + 1;
                pilha[topo] = atual;
                atual = atual -> esquerdo;
            }
            
            if (topo == -1)
            {
                break;
            }
            
            atual = pilha[topo];
            topo = topo - 1;

            if (atual -> direito == NULL || atual -> direito == recente)
            {
                printf("%d ", atual -> info);
                recente = atual;
                atual = NULL;
            }
                
            else
            {
                topo = topo + 1;
                pilha[topo] = atual;
                atual = atual -> direito;
            }
        }
    }
    
    else
    {
        printf("Opção inválida\n");
    }
}

