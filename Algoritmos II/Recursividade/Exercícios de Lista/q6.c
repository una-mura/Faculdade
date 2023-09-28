#include <stdio.h>

int funA(int, int);

int main() {
    
    printf("%d", funA(3, 2));

    return 0;
}

int funA(int m, int n) {

    if (!m)
        return n + 1;

    else

    if (!n)
        return funA(m-1, 1);

    else
        return funA(m-1, funA(m, n-1));
}
