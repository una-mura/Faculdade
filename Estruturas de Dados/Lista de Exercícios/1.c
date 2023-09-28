#include <stdio.h>
#include <stdlib.h>

typedef struct Amigo
{
    int ID;
    struct Amigo *prox;
} Amigo;

typedef struct Pessoa
{
    int ID;
    Amigo *amigos;
    struct Pessoa *prox;
} Pessoa;

typedef struct Orkut
{
    Pessoa *pessoas;
} Orkut;

Pessoa *criaPessoa(int ID);
Amigo *criaAmigo(int ID);
void Relaciona(int amigo1, int amigo2, Orkut *pOrkut);
void destroiOrkut(Orkut orkut);

int main()
{
    Orkut orkut;
    orkut.pessoas = NULL;

    Relaciona(1, 2, &orkut);

    printf("%d %d\n", orkut.pessoas->ID, orkut.pessoas->prox->ID);

    destroiOrkut(orkut);

    return 0;
}

Pessoa *criaPessoa(int ID)
{
    Pessoa *novaPessoa = (Pessoa *) malloc(sizeof(Pessoa));

    novaPessoa -> ID = ID;
    novaPessoa -> amigos = NULL;
    novaPessoa -> prox = NULL;

    return novaPessoa;
}

Amigo *criaAmigo(int ID)
{
    Amigo *novoAmigo = (Amigo *) malloc(sizeof(Amigo));

    novoAmigo -> ID = ID;
    novoAmigo -> prox = NULL;

    return novoAmigo;
}

void Relaciona(int amigo1, int amigo2, Orkut *pOrkut)
{
    Pessoa *p1 = NULL;
    Pessoa *p2 = NULL;

    Pessoa *atual = pOrkut -> pessoas;

    while (atual != NULL)
    {
        if (atual -> ID == amigo1)
        {
            p1 = atual;
            break;
        }

        atual = atual -> prox;
    }

    if (p1 == NULL)
    {
        p1 = criaPessoa(amigo1);
        p1 -> prox = pOrkut -> pessoas;
        pOrkut -> pessoas = p1;
    }
    
    atual = pOrkut -> pessoas;
    while (atual != NULL)
    {
        if (atual -> ID == amigo2)
        {
            p2 = atual;
            break;
        }
        
        atual = atual -> prox;
    }
    
    if (p2 == NULL)
    {
        p2 = criaPessoa(amigo2);
        p2 -> prox = pOrkut -> pessoas;
        pOrkut -> pessoas = p2;
    }

    Amigo *novoAmigo = criaAmigo(amigo2);
    novoAmigo -> prox = p1 -> amigos;
    p1 -> amigos = novoAmigo;    
}

void destroiOrkut(Orkut orkut)
{
    Pessoa *atual = orkut.pessoas;

    while (atual != NULL) 
    {
        Amigo *amigoAtual = atual -> amigos;

        while (amigoAtual != NULL) 
        {
            Amigo *proxAmigo = amigoAtual -> prox;
            free(amigoAtual);
            amigoAtual = proxAmigo;
        }

        Pessoa *proxPessoa = atual -> prox;
        free(atual);
        atual = proxPessoa;
    }
}
