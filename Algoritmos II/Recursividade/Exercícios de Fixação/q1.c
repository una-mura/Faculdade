#include <stdio.h>

int somaN(int);

int main() {

    int num;

    printf("Digite um número: ");
    scanf("%d", &num);
    printf("O resultado é %d\n", somaN(num));

    return 0;
}

int somaN(int n) {
    if (!n)
        return n;
    else
        return n + somaN(n-1);
}
