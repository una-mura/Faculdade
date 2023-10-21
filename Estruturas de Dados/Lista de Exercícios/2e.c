#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct node
{
    int info;
    struct node *proximo;
    struct node *anterior;
} node;

void ordenaLista(node **cabeca); //função pedida pelo exercício
void insereElemento(node **cabeca, int elemento);
void destroiLista(node **cabeca);
void mostraLista(node *cabeca);

int main()
{
    node *cabeca = NULL;
    char opcao = '\0';
    int elemento;

    while (1)
    {
        printf("\nOpções\n\n");

        printf("I -> Inserir elemento\n");
        printf("M -> Mostra elementos\n");
        printf("S -> Sair do programa\n");

        printf("\nSeleção: "); scanf(" %c", &opcao);
        opcao = tolower(opcao);

        if (opcao == 'i')
        {
            printf("\nElemento a ser inserido: ");
            scanf("%d", &elemento);
            insereElemento(&cabeca, elemento);
        }

        else if (opcao == 'm')
            mostraLista(cabeca);

        else if (opcao == 's')
            break;

        else
            printf("Seleção inválida\n");
    }

    ordenaLista(&cabeca);
    mostraLista(cabeca);

    destroiLista(&cabeca);
    
    return 0;
}

void ordenaLista(node **cabeca)
{
    int troca;
    char opcao;
    node *atual;
    node *proximo = NULL;

    printf("\nOrdenar lista em ordem crescente (C) ou decrescente (D): ");
    scanf(" %c", &opcao); opcao = tolower(opcao);

    if (opcao == 'c' || opcao == 'd')
    {
        do
        {
            troca = 0;
            atual = *cabeca;

            while (atual -> proximo != proximo)
            {
                if (opcao == 'c')
                {
                    if (atual -> info > atual -> proximo -> info)
                    {
                        int temp = atual -> info;
                        atual -> info = atual -> proximo -> info;
                        atual -> proximo -> info = temp;
                        troca = 1;
                    }
                }
                
                else if (opcao == 'd')
                {
                    if (atual -> info < atual -> proximo -> info)
                    {
                        int temp = atual -> info;
                        atual -> info = atual -> proximo -> info;
                        atual -> proximo -> info = temp;
                        troca = 1;
                    }
                }
            
                atual = atual -> proximo;
            }

            proximo = atual;

        } while (troca);
    }
    
    else
        printf("Inválido. Encerrando...\n");
}

void insereElemento(node **cabeca, int elemento)
{
    node *novoNode = (node *) malloc(sizeof(node));
    novoNode -> info = elemento;
    novoNode -> proximo = NULL;
    novoNode -> anterior = NULL;

    if (*cabeca == NULL)
        *cabeca = novoNode;
    
    else
    {
        node *aux = *cabeca;

        while (aux -> proximo != NULL)
        {
            aux = aux -> proximo;
        }

        aux -> proximo = novoNode;
        novoNode -> anterior = aux;
    }
}

void destroiLista(node **cabeca) 
{
    while (*cabeca != NULL)
    {
        node *temp = *cabeca;
        *cabeca = (*cabeca) -> proximo;
        free(temp);
    }
}

void mostraLista(node *cabeca)
{
    node *temp = cabeca;

    printf("\n");

    while (temp != NULL) 
    {
        printf("%d -> ", temp -> info);
        temp = temp -> proximo;
    }

    printf("NULL\n");
}