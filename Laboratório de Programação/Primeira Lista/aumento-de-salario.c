#include <stdio.h>

int main() {

    float salary, readjustment, rate;

    scanf("%f", &salary);

    if (salary <= 400.00) 
        rate = 0.15;
    else if (salary <= 800.00)
        rate = 0.12;   
    else if (salary <= 1200.00)
        rate = 0.10;
    else if (salary <= 2000.00)
        rate = 0.07;
    else
        rate = 0.04;

    readjustment = salary*rate;
    salary += readjustment;
    rate  *= 100;

    printf("Novo salario: %.2f\n", salary);
    printf("Reajuste ganho: %.2f\n", readjustment);
    printf("Em percentual: %.0f %%\n", rate);

    return 0;
}
