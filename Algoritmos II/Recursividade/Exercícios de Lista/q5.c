#include <stdio.h>

int dec2bin(int dec);

int main() {
    
    int num;

    printf("número: ");
    scanf("%d", &num);

    printf("binário: %d\n", dec2bin(num));

    return 0;
}

int dec2bin(int dec) {

    if (dec == 1 || dec == 0)
        return dec;
    else
        return dec % 2 + dec2bin(dec / 2) * 10;
}
