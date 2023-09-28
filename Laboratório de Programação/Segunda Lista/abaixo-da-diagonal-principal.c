#include <stdio.h>

/* 
Read an uppercase character that indicates an operation that will be performed 
in an array M[12][12]. Then, calculate and print the sum or average considering 
only that numbers that are above the secundary diagonal of the array. */

#include <stdio.h>

int main() {
    float M[12][12], sum, average;
    int count, i, j;
    char O;

    sum = 0, count = 0;

    do scanf("%c", &O);
    while (O != 'S' && O != 'M');
    
    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%f", &M[i][j]);

    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            if (i > j) {
                sum += M[i][j];
                count++; 
            }
        
    if (O == 'S')
        printf("%.1f\n", sum);
    else {
        average = sum / count;
        printf("%.1f\n", average);
    }

    return 0;
}