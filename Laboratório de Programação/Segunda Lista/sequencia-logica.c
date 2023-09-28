#include <stdio.h>

/* 
Write a program that reads an integer N. N * 2 lines must be printed 
by this program according to the example below. For numbers with more 
than 6 digits, all digits must be printed (no cientific notation allowed).
*/

int pot(int, int);

int main() {

    int num;

    do scanf("%d", &num);
    while (num <= 1 || num >= 1000);
    
    for (int i = 1; i <= num; i++) {
        printf("%d %d %d\n", i, pot(i, 2), pot(i, 3));
        printf("%d %d %d\n", i, pot(i, 2) + 1, pot(i, 3) + 1);
    }

    return 0;
}

int pot(int base, int expo) {

    int n = base;

    for (int i = 1; i < expo; i++)
        n = n * base;
        
    return n;
}