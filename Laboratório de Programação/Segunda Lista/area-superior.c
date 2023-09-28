#include <stdio.h>

int main() {
    double M[12][12], sum, average;
    int count, i, j;
    char O;

    count = 0, sum = 0.0;

    do scanf(" %c", &O);
    while (O != 'S' && O != 'M');
    
    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);

    for (i = 0; i < 5; i++)
        for (j = i + 1; j < 11 - i; j++) {
                sum += M[i][j];
                count++; 
        }
        
    if (O == 'S')
        printf("%.1lf\n", sum);
    else {
        average = sum / count;
        printf("%.1lf\n", average);
    }

    return 0;
}