#include <stdio.h>

int main() {
    
    unsigned long long int num;
    int temp;

    do scanf("%llu", &num);
    while (num < 0 || num > 9999999999);
    
    while (num != 0) {

        temp = num % 10;
        printf("%d", temp);
        num = num / 10;
    }

    printf("\n");

    return 0;
}
