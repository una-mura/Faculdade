#include <stdio.h>

/*faça um algoritmo que leia dois valores,
troque os valores das duas variáveis entre si
e as escrevas na saída */

int main() {
    int num1, num2, aux;

    printf("primeiro valor: ");
    scanf("%d", &num1);
    printf("segundo valor: ");
    scanf("%d", &num2);

    aux = num1;
    num1 = num2;
    num2 = aux; 

    printf("novos valores: %i e %i", num1, num2);

    return 0;
}