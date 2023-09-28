#include <stdio.h>

int theGreatest(int, int, int);

int main() {
    
    int num1, num2, num3;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    printf("%d eh o maior\n", theGreatest(num1, num2, num3));

    return 0;
}

int theGreatest(int a, int b, int c) {

    int maiorAB, maioral;

    maiorAB = (a + b + abs(a - b)) / 2;
    maioral = (maiorAB + c + abs(maiorAB - c)) / 2;

    return maioral;
}