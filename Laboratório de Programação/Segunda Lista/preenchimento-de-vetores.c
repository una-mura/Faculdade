#include <stdio.h>

/* Write a program that reads a number T and fill a 
vector N[1000] with the numbers from 0 to T-1 repeated times */

int main() {

    int i, num, vec[1000], temp = 0;

    scanf("%d", &num);

    for (i = 0; i < 1000; i++) {
        
        vec[i] = temp;
        printf("N[%d] = %d\n", i, temp);
        temp++;

        if (temp == num)
            temp = 0;
    }

    return 0;
}
