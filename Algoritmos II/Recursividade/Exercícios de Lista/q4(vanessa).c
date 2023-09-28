// exercício 4 da lista 3
// a estrutura de repeticao é substituida pela recursividade
#include <stdio.h>

int serie (int n);

int main() {

    int num;
   
    printf ("Digite um número: ");
    scanf ("%d", &num);
   
    serie(num);

    printf("\n");

    return 0;
}

int serie (int n){
    if (n == 0) {

        printf ("%d", n);
        return 0;

    } else {

        int s = n + serie(n-1);
        printf ("\n%d", s);
        return s;  
    }
}