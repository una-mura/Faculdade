#include "stdio.h"
#include "stdlib.h"

/*
Faça um algoritmo que leia as notas de um aluno e calcule a média das notas
inseridas. Antes de inserir as notas, você deve perguntar ao usuário quantas notas ele
deseja inserir para o aluno atual. Depois disso, exiba as notas e a média do aluno.
*/

int main() {

    double media, *pNota; 
    int i, qtd;

    printf("Quantas notas deseja inserir?\nR: ");
    scanf("%d", &qtd);

    pNota = (double * ) malloc(sizeof(double) * qtd);

    if (pNota == NULL)
        printf("Erro no alocamento de memória");
    else {

        media = 0.0;

        for (i = 0; i < qtd; i++) {

            printf("Nota [%d]: ", i+1);
            scanf("%lf", &pNota[i]);
            media = media + pNota[i];
        }       

        printf("\nRelatório\n\n");

        for (int i = 0; i < qtd; i++)
            printf("Nota [%d]: %.2lf\n", i+1, pNota[i]);

        printf("Média: %.2lf\n", media / qtd);
    }

    free(pNota);

    return 0;
}