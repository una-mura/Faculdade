#include <stdio.h>

int main() {
    
    int i, j, N, elemento;

    do {

        do scanf("%d", &N);
        while (N < 0 || N > 100);

            for (i = 1; i <= N; i++)
                for (j = 1; j <= N; j++) {
                    
                    elemento = i;

                    if (j < elemento)
                        elemento = j;
                    
                    if (N-i+1 < elemento)
                        elemento = N - i + 1;

                    if (N-j+1 < elemento)
                        elemento = N - j + 1;
                    
                    printf("%3d", elemento);

                    if (j < N)
                        printf(" ");
                    else
                        printf("\n");
                }
        if (N!=0)        
            printf("\n");

    } while (N !=0);
    
    return 0;
}