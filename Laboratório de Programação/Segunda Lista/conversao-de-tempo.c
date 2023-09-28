#include <stdio.h>

/* Read an integer value, which is the duration in seconds of a certain event, 
and inform it expressed in hours:minutes:seconds. */

void secondsToHMS(int* hrs, int* min, int* seg);

int main() {
    
    int h, m, s;

    scanf("%d", &s);

    secondsToHMS(&h, &m, &s);

    return 0;
}

void secondsToHMS(int* hrs, int* min, int* seg) {

    *min = *seg / 60;
    *seg = *seg % 60;
    *hrs = *min / 60;
    *min = *min % 60;

    printf("%d:%d:%d\n", *hrs, *min, *seg);
}
