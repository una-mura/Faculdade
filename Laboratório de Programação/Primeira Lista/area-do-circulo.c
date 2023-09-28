#include <stdio.h>

int main() {

    double pi = 3.14159;
    double area, radius;

    scanf("%lf", &radius);
    radius = radius*radius;
    area = pi * radius;
    printf("A=%.4f\n", area);

    return 0;
}
