#include <stdio.h>
#include <string.h>

/*
Converta vários números de base decimal para a base "ACM"
*/

int fat(int n);

int main() {

    //'num_acm' vai receber o equivalente numérico da string 'acm[5]'.
    //'pos' é posição decimal, pra usar no fatorial
    int num_acm, num_dec, pos;
    char acm[5];

    scanf("%s", acm);

    while (acm[0] != '0') {

        pos = strlen(acm); //o tamanho da string é igual a qtd de casas decimais

        num_dec = 0; //reseta o numero de base decimal a cada loop

        for (int i = 0; pos != 0; i++) {

            num_acm = acm[i] - 48; //converte usando tabela ASCII
            num_dec = num_dec + num_acm * fat(pos); //a fórmula do exercício

            pos--; //diminui a casa decimal
        }

        printf("%d\n", num_dec);

        scanf("%s", acm);
    }

    return 0;
}

int fat(int n) {

    if (!n)
        return 1;
    else
        return n * fat(n - 1);
}
