#include <stdio.h>

/* Read an integer N and compute all its divisors. */

int main() {
    
    int num;

    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
        if (num % i == 0)
            printf("%d\n", i);

    return 0;
}
