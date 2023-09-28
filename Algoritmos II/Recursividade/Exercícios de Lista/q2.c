#include <stdio.h>

int func(int, int);

int main() {
    
    int numA, numB;

    printf("número A: ");
    scanf("%d", &numA);

    printf("número B: ");
    scanf("%d", &numB);
    
    printf("quantidade de B em A: ");

    if (func(numA, numB) == -1)
        printf("erro");
    else
        printf("%d", func(numA, numB));

    return 0;
}

int func(int a, int b) {

    if (b < 0 || b > 9) 
        return -1;

    if (a < 10) {
        
        if (a == b)
            return 1;
        else
            return 0;
    }

    if (b == a % 10)
        return 1 + func(a/10, b);
    else
        return func(a/10, b);
}