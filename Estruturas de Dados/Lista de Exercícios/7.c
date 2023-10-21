#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    char info;
    struct node *esquerdo;
    struct node *direito;
} node;

node *criaArvore(char info);
node *constroiArvore(char *expressao, int inicio, int final);
void mostraExpressao(node *raiz);
void limpar(node **raiz);

int main()
{
    char expressao[] = "6+6+6*2";

    node *raiz = constroiArvore(expressao, 0, strlen(expressao) - 1);

    mostraExpressao(raiz);
    printf("\n");

    limpar(&raiz);

    return 0;
}

node *criaArvore(char info)
{
    node *raiz = (node *) malloc(sizeof(node));

    raiz -> info = info;
    raiz -> direito = NULL;
    raiz -> esquerdo = NULL;

    return raiz;
}

node *constroiArvore(char *expressao, int inicio, int final)
{
    if (inicio > final) 
    {return NULL;}
    
    node *raiz = NULL;

    int parenteses = 0;
    int minPrecedencia = 0;
    int posicaoOperador = -1;

    for (int i = final; i >= inicio; i--)
    {
        if (expressao[i] == ')') {parenteses++;}
        
        else if (expressao[i] == '(') {parenteses--;}
        
        else if (parenteses == 0)
        {
            if (expressao[i] == '+' || expressao[i] == '-')
            {
                if (minPrecedencia <= 2)
                {
                    minPrecedencia = 2;
                    posicaoOperador = i;
                }
            }
            
            else if (expressao[i] == '*' || expressao[i] == '/')
            {
                if (minPrecedencia <= 1)
                {
                    minPrecedencia = 1;
                    posicaoOperador = i;
                }
            }
        }
    }

    if (posicaoOperador != -1)
    {
        raiz = criaArvore(expressao[posicaoOperador]);
        raiz -> esquerdo = constroiArvore(expressao, inicio, posicaoOperador - 1);
        raiz -> direito = constroiArvore(expressao, posicaoOperador + 1, final);
    }

    else if (expressao[inicio] == '(' && expressao[final] == ')')
    {
        raiz = constroiArvore(expressao, inicio + 1, final - 1);
    }

    else 
    {raiz = criaArvore(expressao[inicio]);}

    return raiz;    
}

void mostraExpressao(node *raiz)
{
    if (raiz != NULL)
    {
        if (raiz -> esquerdo != NULL || raiz -> direito != NULL)
        {
            printf("(");
        }        

        mostraExpressao(raiz -> esquerdo);
        printf("%c", raiz -> info);
        mostraExpressao(raiz -> direito);

        if (raiz -> esquerdo != NULL || raiz -> direito != NULL)
        {
            printf(")");
        }
    }
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