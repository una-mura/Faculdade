#include <stdio.h>

/*Faça o algoritmo de um função lógica que receba os três valores dos coeficientes de uma 
equação do segundo grau e retorne as suas duas raízes reais (independente se forem ou não iguais), 
retornando VERDADEIRO se existem raízes reais, ou FALSO em caso contrário.*/

int bascara (float, float , float);

int main() {
    
    float num1, num2, num3;

    printf ("Primeiro coeficiente: ");
    scanf ("%f",&num1);
    
    printf ("Segundo coeficiente: ");
    scanf ("%f",&num2);
    
    printf ("Terceiro coeficiente: ");
    scanf ("%f",&num3);
    
    if (bascara (num1, num2, num3) == 1)
        printf ("Verdadeiro\n");
    else
        printf ("Falso\n");
    
    return 0;
}

int bascara (float a, float b, float c){

    int logico;
    float delta;
    
    delta = ((b*b) - (4 * a*c));
    
    printf (" %.2f\n",delta);
    
    if (delta < 0)
        logico = 0;
    else
        logico = 1;
    
    return logico;
}
