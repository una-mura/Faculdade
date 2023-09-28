#include <stdio.h>

/* Construa um programa que simule uma calculadora. Devem ser efetuadas
somente as quatro operações aritméticas. O programa deve ler dois valores
e a operação a ser efetuada. Após o cálculo, o programa apresenta a resposta */

int main() {

    float num1, num2;
    char op;

    printf("digite um número: ");
    scanf("%f", &num1);
    printf("digite operador: ");
    scanf(" %c", &op);
    printf("digite outro número: ");
    scanf("%f", &num2);

    while (op != '+' && op != '-' && op != '*' && op != '/') {
        printf("operador fora do parâmetro");
        printf("digite operador (+ - * /): ");
        scanf("%c", &op);
    }

    switch (op) {
    case '+':
        printf ("resultado: %f", num1 + num2);
        break;
    case '-':
        printf ("resultado: %f", num1 - num2);
        break;
    case '*':
        printf ("resultado: %f", num1 * num2);
        break;
    case '/':
        if (num2 == 0)
            printf("impossível dividir por zero");
        else
            printf ("resultado: %f", num1 / num2);
        break;
    }

    return 0;
}