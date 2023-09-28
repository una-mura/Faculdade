#include <stdio.h>

/* 
Write a program that reads two scores of a student. 
Calculate and print the average of these scores. 
Your program must accept just valid scores [0..10]. 
Each score must be validated separately.
*/

int main() {

    float nota1, nota2;

    do {
    
        scanf("%f", &nota1);

        if (nota1 < 0 || nota1 > 10)
            printf("nota invalida\n");
        
    } while (nota1 < 0 || nota1 > 10);

    do {
    
        scanf("%f", &nota2);

        if (nota2 < 0 || nota2 > 10)
            printf("nota invalida\n");
        
    } while (nota2 < 0 || nota2 > 10);
    
    printf("media = %.2f\n", (nota1 + nota2) / 2);

    return 0;
}
