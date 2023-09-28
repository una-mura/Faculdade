#include <stdio.h>

/*escreva um algoritmo que leia as dimensões de um
retângulo (base e altura), calcule e escreva
a área do retângulo*/

int main() {
    float base, altura, area;

    printf("base do retãngulo: ");
    scanf("%f", &base);
    printf("altura do retãngulo: ");
    scanf("%f", &altura);

    while (base <= 0 || altura <= 0) {
        printf("dados inválidos, tente novamente\n");
        printf("base do retãngulo: ");
        scanf("%f", &base);
        printf("altura do retãngulo: ");
        scanf("%f", &altura);
    }
    
    area = base * altura;

    printf("área do retângulo: %f", area);

    return 0;
}