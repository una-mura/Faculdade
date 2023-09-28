#include <stdio.h>

/* Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e
cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos
anos serão necessários para que Zé seja maior que Chico */

int main() {

    int chicoAltura = 150;
    int zeAltura = 110;
    int i = 0;

    do {
        chicoAltura += 2;
        zeAltura += 3;
        i += 1;
    } while (chicoAltura > zeAltura);

    printf("serão necessários %d anos para que zé seja maior que chico", i);

    return 0;
}