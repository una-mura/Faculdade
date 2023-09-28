#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct string
{
    char info;
    struct string *prox;
} string;

typedef struct pilha
{
    string *cabeca;
} pilha;

void prepara(string **cabeca, char *mensagem);
void inverte(string **cabeca);
void decifra(string **cabeca);
void escreve(string *cabeca);
void destroi(string **cabeca);

int main()
{
    char mensagem[] = "L.AGE LOTIUH MES ODA DES DARUTUSTRE";
    string *texto = NULL;

    prepara(&texto, mensagem);
    inverte(&texto);
    decifra(&texto);
    escreve(texto);
    destroi(&texto);

    return 0;
}

void prepara(string **cabeca, char *mensagem)
{
    string *atual = *cabeca;

    for (int i = 0; i < (int)strlen(mensagem); i++)
    {
        string *novaLetra = (string *) malloc(sizeof(string));
        novaLetra -> info = mensagem[i];
        novaLetra -> prox = NULL;

        if (*cabeca == NULL)
        {
            *cabeca = novaLetra;
            atual = novaLetra;
        }
        else
        {
            atual -> prox = novaLetra;
            atual = novaLetra;
        }
    }
}

void inverte(string **cabeca)
{
    string *anterior = NULL;
    string *atual = *cabeca;
    string *proximo = NULL;

    while (atual != NULL)
    {
        proximo = atual -> prox;
        atual -> prox = anterior;
        anterior = atual;
        atual = proximo;
    }

    *cabeca = anterior;
}

void decifra(string** cabeca) 
{
    string *novaString = *cabeca;
    pilha novaPilha;

    while (novaString != NULL) 
    {
        novaPilha.cabeca = NULL;
        string* stringAux = novaString;

        while (stringAux != NULL && strchr("AEIOUaeiou", stringAux->info) == NULL) 
        {
            string *pilhaAux = (string *) malloc(sizeof(string));
            pilhaAux -> info = stringAux -> info;
            pilhaAux -> prox = novaPilha.cabeca;
            
            novaPilha.cabeca = pilhaAux;
            stringAux = stringAux -> prox;
        }

        while (novaPilha.cabeca != NULL && novaString != NULL) 
        {
            novaString -> info = novaPilha.cabeca -> info;
            novaString = novaString -> prox;

            string *temp = novaPilha.cabeca;
            novaPilha.cabeca = novaPilha.cabeca -> prox;
            free(temp);
        }

        if (novaString != NULL) 
            novaString = novaString->prox;
    }
}


void escreve(string *cabeca)
{
    while (cabeca != NULL)
    {
        string *temp = cabeca;
        printf("%c", temp -> info);
        cabeca = cabeca -> prox;
    }

    printf("\n");    
}

void destroi(string **cabeca)
{
    while (*cabeca != NULL)
    {
        string *temp = *cabeca;
        *cabeca = (*cabeca) -> prox;
        free(temp);
    }
}
