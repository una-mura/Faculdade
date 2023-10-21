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
void mostrar(node *raiz);
int contar(node *raiz); //função pedida pelo exercício

int main()
{
    node *raiz = NULL;
    char opcao = '\0';
    int elemento;

    while (1)
    {
        printf("\nOpções\n\n");

        printf("I -> Inserir elemento\n");
        printf("C -> Contar elementos\n");
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

        else if (opcao == 'c') 
        {
            printf("Quantidade de nós da árvore: %d\n", contar(raiz));
        }

        else if (opcao == 'm') 
        {
            printf("Elementos na árvore: ");
            mostrar(raiz); printf("\n");
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

void mostrar(node *raiz)
{
    if (raiz != NULL)
    {
        mostrar(raiz -> esquerdo);
        printf("%d ", raiz -> info);
        mostrar(raiz -> direito);
    }
}

int contar(node *raiz)
{
    if (raiz == NULL)
    {
        return 0;
    }

    else
    {
        return 1 + contar(raiz -> esquerdo) + contar(raiz -> direito);
    }
}

