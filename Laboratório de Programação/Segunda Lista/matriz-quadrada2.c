#include <stdio.h>

int pot(int base, int expo);

int main() {
    
    int dig, i, j, num, mx[15][15], ult;

    do scanf("%d", &num);
    while (num < 0 || num > 15);
    
    while (num != 0) {

        dig = 0;
        
        for (i = 0; i < num; i++)
            for (j = 0; j < num; j++)
                mx[i][j] = pot(2, i+j);
        
        ult = mx[num-1][num-1];

        while (ult != 0) {
            ult = ult / 10;
            dig++;
        }
        
        for (i = 0; i < num; i++) {

            for (j = 0; j < num; j++) {

                if (j == 0) 
                    printf("%*d", dig, mx[i][j]);
                else
                    printf(" %*d", dig, mx[i][j]);
            }

            printf("\n");
        }

        printf("\n");

        do scanf("%d", &num);
        while (num < 0 || num > 15);
    }

    return 0;
}

int pot(int base, int expo) {

    int n = base;

    if (expo != 0) {

        for (int i = 1; i < expo; i++)
            n = n * base;
        
        return n;
    }
    else
        return 1;    
}