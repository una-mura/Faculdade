#include <stdio.h>

int main() {
    
    float M[12][12], sum = 0;
    int i, j, counter = 0;
    char O;

    do scanf(" %c", &O);
    while (O != 'S' && O != 'M');

    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%f", &M[i][j]);
    
    for (j = 11; j > 6; j--)
        for (i = 1; i < j; i++)

            if (i+j >= 12) {

                sum = sum + M[i][j];
                counter++;

            }
            
    switch (O) {

    case 'S':
        printf("%.1f\n", sum);
        break;
    
    case 'M':
        printf("%.1f\n", sum / counter);
        break;
    }
    
    return 0;
}
