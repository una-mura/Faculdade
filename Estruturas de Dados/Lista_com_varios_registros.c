#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "ctype.h"

typedef struct endereco
{
    char cidade[100];
    char bairro[100];
    char rua[100];
    int numero;
} endereco;

typedef struct restaurante 
{
    char nomeRestaurante[255];
    char tipoComida[20];
    int notaRestaurante;
    endereco *enderecoRestaurante;
    struct restaurante *proximo;
} restaurante;

endereco *criaEndereco();
restaurante *criaRestaurante();
restaurante *filtrarNota(restaurante *node, int nota);
restaurante *filtrarTipo(restaurante *node, char *tipo);
void inserir(restaurante **cabeca);
void listar(restaurante *node);
void liberar(restaurante *cabeca);

int main() 
{ 
    restaurante *cabeca = NULL;
    char opcao, tipo[20];
    int nota;

    do
    {
        printf("\nOpções:\n\nI -> para inserir novo restaurante;\nL -> para listar restaurantes;\nS -> para sair\n\nSeleção: ");
        scanf(" %c", &opcao);

        opcao = tolower(opcao);
    
        if (opcao == 'i')
           inserir(&cabeca); 
        
        else if (opcao == 'l') 
        {
            printf("\nFiltros:\n\nC-> para filtrar por culinária;\nN -> para filtrar por nota\nV -> para voltar\n\nSeleção: ");
            scanf(" %c", &opcao);
            opcao = tolower(opcao);

            if (opcao == 'c') 
            {
                printf("\nTipo de Culinária: "); scanf("%[^\n]", tipo);
                listar(filtrarTipo(cabeca, tipo));
            }
                
            else if (opcao == 'n')
            {
                printf("\nNota: "); scanf("%d", &nota);
                listar(filtrarNota(cabeca, nota));
            }

            else if (opcao == 's')
                opcao = 'v';
        }

        else if (opcao != 's')
            printf("\n\n Opção inválida");
        
    } while (opcao != 's');

    liberar(cabeca);

    return 0;
}

//funções

restaurante *criaRestaurante() 
{
    restaurante *novo = (restaurante *) malloc(sizeof(restaurante));

    printf("\nNome do restaurante: "); scanf(" %[^\n]", novo->nomeRestaurante);
    printf("Tipo de comida servida: "); scanf(" %[^\n]", novo->tipoComida);
    printf("Nota do restaurante (0 a 5): "); scanf(" %d", &novo->notaRestaurante);

    novo -> enderecoRestaurante = criaEndereco();
    novo -> proximo = NULL;

    return novo;
}

endereco *criaEndereco()
{
    endereco *end = (endereco *) malloc(sizeof(endereco));

    printf("Rua: "); scanf(" %[^\n]", end->rua);
    printf("Número: "); scanf(" %d", &end->numero);
    printf("Bairro: "); scanf(" %[^\n]", end->bairro);
    printf("Cidade: "); scanf(" %[^\n]", end->cidade);

    return end;
}

void inserir(restaurante **cabeca) 
{
    restaurante *novo = criaRestaurante();

    if (*cabeca == NULL) 
    {
        *cabeca = novo;
    }
    else 
    {
        restaurante *atual = *cabeca;

        while (atual -> proximo != NULL)
            atual = atual -> proximo;
            
        atual -> proximo = novo;
    }
}

void listar(restaurante *node) 
{
    while (node != NULL)
    {
        printf("\n%s\n", node->nomeRestaurante);
        printf("  Comida: %s\n", node->tipoComida);
        printf("  Nota: %d\n", node->notaRestaurante);
        printf("  Rua: %s\n", node->enderecoRestaurante->rua);
        printf("  Número: %d\n", node->enderecoRestaurante->numero);
        printf("  Bairro: %s\n", node->enderecoRestaurante->bairro);
        printf("  Cidade: %s\n", node->enderecoRestaurante->cidade);

        node = node -> proximo;
    }
}

restaurante *filtrarNota(restaurante *node, int nota) 
{
    restaurante *filtrado = NULL;
    restaurante *ultimoFiltrado = NULL;

    while (node != NULL) 
    {
        if (node->notaRestaurante >= nota) 
        {
            restaurante *novoFiltrado = (restaurante *)malloc(sizeof(restaurante));
            //memcpy(novoFiltrado, node, sizeof(restaurante));
            novoFiltrado->proximo = NULL;

            if (filtrado == NULL) 
            {
                filtrado = novoFiltrado;
                ultimoFiltrado = filtrado;
            } 
            else 
            {
                ultimoFiltrado->proximo = novoFiltrado;
                ultimoFiltrado = novoFiltrado;
            }
        }

        node = node->proximo;
    }

    return filtrado;
}

restaurante *filtrarTipo(restaurante *node, char *tipo) 
{
    restaurante *filtrado = NULL;
    restaurante *ultimoFiltrado = NULL;

    while (node != NULL) 
    {
        if (strcmp(node->tipoComida, tipo)) 
        {
            restaurante *novoFiltrado = (restaurante *)malloc(sizeof(restaurante));
            //memcpy(novoFiltrado, node, sizeof(restaurante));
            novoFiltrado->proximo = NULL;

            if (filtrado == NULL) 
            {
                filtrado = novoFiltrado;
                ultimoFiltrado = filtrado;
            } 
            else 
            {
                ultimoFiltrado->proximo = novoFiltrado;
                ultimoFiltrado = novoFiltrado;
            }
        }

        node = node->proximo;
    }

    return filtrado;
}


void liberar(restaurante *cabeca)
{
    while (cabeca != NULL) 
    {
        restaurante *prox = cabeca->proximo;
        free(cabeca->enderecoRestaurante);
        free(cabeca);
        cabeca = prox;
    }
}