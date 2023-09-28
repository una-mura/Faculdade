#include <stdio.h>

/*leia três valores e informe se podem corresponder aos lados
de um triãngulo. Em caso afirmativo, verifique e informe se esse
triângulo é: equilátero; isósceles, escaleno; retângulo*/

int main() {

    float lado1, lado2, lado3;
    int isTriangulo = 0; 
    int isEquilatero = 0;
    int isIsosceles = 0;
    int isEscaleno = 0;
    int isRetangulo = 0;

    printf("medida do lado um: ");
    scanf("%f", &lado1);
    printf("medida do lado dois: ");
    scanf("%f", &lado2);
    printf("medida do lado três: ");
    scanf("%f", &lado3);

    if (lado1 + lado2 > lado3)
        if (lado1 + lado3 > lado2)
            if (lado2 + lado3 > lado1)
                isTriangulo = 1;

    if (isTriangulo) {
        if (lado1 == lado2 && lado1 == lado3)
            isEquilatero = 1;
        
        else if (lado1 == lado2 && lado1 != lado3)
            isIsosceles = 1;
        else if (lado1 == lado3 && lado1 != lado2)
            isIsosceles = 1;
        else if (lado2 == lado3 && lado1 != lado2)
            isIsosceles = 1;

        else
            isEscaleno = 1;

        if (isEscaleno || isIsosceles) {
            if (lado1*lado1 == lado2*lado2 + lado3*lado3)
                isRetangulo = 1;
            else if (lado2*lado2 == lado1*lado1 + lado3*lado3)
                isRetangulo = 1;
            else if (lado3*lado3 == lado1*lado1 + lado2*lado2)
                isRetangulo = 1;
        } 
        
    } else
        printf("não é possível formar triângulo");

    if (isEquilatero)
        printf("o triângulo é equilátero");
    if (isIsosceles)
        printf("o triângulo é isósceles");
    if (isEscaleno)
        printf("o triângulo é escaleno");
    if (isRetangulo)
        printf(" e retângulo");

    return 0;
}