#include <stdio.h>

int num_chamadas;

int fibonacci(int n) {

    num_chamadas++;

    if (n == 0 || n == 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main() {

    int i, num, rep;

    scanf("%d", &rep);

    for (i = 0; i < rep; i++) {

        num_chamadas = 0;

        scanf("%d", &num);

        printf("fib(%d) = %d calls = %d\n", num, num_chamadas-1, fibonacci(num));
    }

    return 0;
}
