#include <stdio.h>

int main() {
    
    int i, numT, numX = 0, vecN[1000];

    do scanf("%d", &numT);
    while (numT < 2 || numT > 50);

    for (i = 0; i < 1000; i++) {
        vecN[i] = numX;
        printf("N[%d] = %d\n", i, vecN[i]);
        
        if (numX == numT-1)
            numX = 0;
        else
            numX++;
    }
    return 0;
}
