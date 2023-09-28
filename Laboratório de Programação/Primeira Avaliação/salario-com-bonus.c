#include <stdio.h>

int main() {
    
    double salary, sales_total;
    char name[15];

    scanf("%s", name);
    scanf("%lf", &salary);
    scanf("%lf", &sales_total);

    salary = salary + (sales_total * 0.15);

    printf("TOTAL = R$ %.2lf\n", salary);

    return 0;
}
