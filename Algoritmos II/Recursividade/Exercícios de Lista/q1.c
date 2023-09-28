#include <stdio.h>

void doReverse(int, int);

int main() {
    
    int number;

    printf("número: ");
    scanf("%d", &number);

    doReverse(number, 0);

    return 0;
}

void doReverse(int num, int reverso) {

    int resto;

    if (num) {

        resto = num % 10;
        reverso = reverso*10 + resto;

        doReverse(num/10, reverso);
    } else
        printf("%d\n", reverso);
}
