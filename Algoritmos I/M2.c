#include <stdio.h>

/*
O objetivo deste trabalho prático é desenvolver um sistema de gerenciamento de
estoque que permita aos usuários realizar operaçõees de entrada, saída e consulta
de produtos em um estoque. Você deve desenvolver um programa que permita
ao usuário realizar as seguintes operações:

1. Cadastro de Produtos: O usuário deve ser capaz de cadastrar novos
produtos no estoque, fornecendo informações como o código do produto,
quantidade em estoque e preço unitário. Os dados devem ser armazenados
em uma estrutura de vetor ou matriz.

2. Consulta de Produtos: O sistema deve permitir que o usuário consulte
informações sobre um produto específico, fornecendo o código do produto
como entrada. O programa deve verificar se o produto está cadastrado e
exibir suas informações (quantidade em estoque e preço unitário).

3. Entrada de Produtos: O usuário deve ser capaz de realizar uma entrada
de p rod u tos n o estoqu e, forn ecen d o o c´od igo d o p rod u to e a qu antid ad e
a ser ad icion ad a. O p rogram a d eve atu alizar a qu antid ad e em estoqu e d o
p rod u to corresp on d ente.

4. Saída de Produtos: O usuário deve poder realizar a saída de produtos
do estoque, fornecen do o código do produto e a quantidade a ser retirada.
O programa deve verificar se há quantidade suficiente em estoque e, se
houver, atualizar o estoque.

5. Relatório de Estoque: O sistema deve permitir ao usuário gerar um
relatório que liste todos os produtos cadastrados no estoque, incluindo
código, quantidade em estoque e valor total em estoque (quantidade em
estoque multiplicada pelo preço unitário).
*/

struct Produto
{
    int qtd;
    float preco;
};

int main()
{
    int id, limite, opcao;
    id = 0;

    scanf("%d", &limite);
    struct Produto p[limite];
 
    /*for (i = 0; i < limite; i++)
    {
        printf("produto %d", i);
        scanf("%d", &p[i].qtd);
        scanf("%f", &p[i].preco);
        p[i].id = id++;
    }*/

    scanf("%d", &opcao);

    while (opcao != 0)
    {
        switch (opcao)
        {
            case 1:
                
                if (id <= limite)
                {
                    printf("quantidade: ");
                    scanf("%d", &p[id].qtd);

                    printf("preço: ");
                    scanf("%f", &p[id].preco);
                    id++;
                }

                else
                {
                    printf("bateu o limite\n");
                }
                
                break;

            case 2:
                break;

            case 3:
                break;

            case 4:
                break;
        
            default:
                printf("número inválido\n");
                break;
        }

        scanf("%d", &opcao);
    }    
    
    return 0;
}
