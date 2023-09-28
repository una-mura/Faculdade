#include <stdio.h>
 
int fatorial(int fat); 
 
int main() {
 
    int num;
 
    scanf("%d", &num);
    
    printf("%d\n", fatorial(num));
 
    return 0;
}

int fatorial(int fat) {
    
    if (!fat)
        return 1;
    else
        return fat * fatorial(fat - 1);
}