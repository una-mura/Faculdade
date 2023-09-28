#include <stdio.h>

int mdc(int a, int b) {
    int temp;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int rep, qtdR, qtdV;

    scanf("%d", &rep);

    for (int i = 0; i < rep; i++)
    {
        scanf ("%d %d", &qtdR, &qtdV);

        printf("%d\n", mdc(qtdR, qtdV));
    }

    return 0;
}
