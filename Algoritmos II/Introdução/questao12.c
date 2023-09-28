#include <stdio.h>

/* Seja os seguintes campos de um registro: nome e aniversário. O campo aniversário é
também um registro formado por: dia e mês. Desenvolver um algoritmo que mostre
em cada um dos meses do ano quem são as pessoas que fazem aniversário, exibir
também o dia. Considere um conjunto de 40 pessoas */

int main () {
    struct info {
        char nome[50];
        struct data {
            int dia, mes;
        } aniversario;
    } pessoa[40];

    int i, m;

    /* Se assume que já se tenha os dados de cada pessoa */

    for (m = 1; m <= 12; m++) {
        printf("\naniversariantes do mês %i\n", m);
        for (i = 0; i < 40; i++) {
            if (pessoa[i].aniversario.mes == m) {
                printf("dia %i - %s\n",pessoa[i].aniversario.dia, pessoa[i].nome);
            }
        }
    }
    
    return 0;
}

