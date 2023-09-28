#include <stdio.h>

int dec2Bin(int);

int main() {
    int num;

    printf("número decimal: ");
    scanf("%d", &num);

    printf("número binário: %d", dec2Bin(num));
}

int dec2Bin(int dec) {
    int bin, pot;
    bin = 0, pot = 1;

    while (dec > 0) {
        bin = bin + (pot * (dec % 2));
        pot = pot * 10;
        dec = dec / 2;
    }

    return bin;
}
