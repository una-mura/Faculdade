#include <stdio.h>
#include <math.h>

int main() {
    
    double pi, vol;
    short unsigned int radius;

    pi = 3.14159;

    scanf("%d", &radius);
    vol = pow(radius, 3) * pi * (4.0/3.0);

    printf("VOLUME = %.3lf\n", vol);

    return 0;
}
