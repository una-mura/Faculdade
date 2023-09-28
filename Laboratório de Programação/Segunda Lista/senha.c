#include <stdio.h>

int main() {
    
    int num;

    while (scanf("%d", &num) != EOF) {
        
        if (num >= 1001 && num <= 9999)
            printf("%d\n", num-1);
    }

    return 0;
}
