#include <stdio.h>

int main() {

    int i, num, fibonacci[46];

    scanf("%d", &num);

    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (i = 2; i < num; i++)
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];

    for (i = 0; i < num; i++) {
        
        if (i != num - 1)
            printf("%d ", fibonacci[i]);
        else
            printf("%d", fibonacci[i]);
    }

    printf("\n");   
    
    return 0;
}