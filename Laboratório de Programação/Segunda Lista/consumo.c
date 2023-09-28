#include <stdio.h>

int main() {

    int distance;
    float fuel;
    
    scanf("%d", &distance);
    scanf("%f", &fuel);
    
    printf("%.3f km/l\n", distance/fuel);

    return 0;
}