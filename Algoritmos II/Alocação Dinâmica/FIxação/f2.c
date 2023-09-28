#include "stdio.h"

/*
Faça um programa que:

- Declare uma variável 'a' do tipo float
- Declare um ponteiro 'p' para o tipo float
- Peça que o usuário digite um número do tipo real, e o armazene em 'a'
- Imprima o conteúdo de 'a' e o endereço de 'a'
- Imprima o conteúdo de 'p'
- Atribua o endereço de 'a' e ao ponteiro 'p'
- Imprima o conteúdo do endereço apontado por 'p' e o conteúdo de 'p'
*/

int main() {

    float a, *p;

    printf("Digite um número real: ");
    scanf("%f", &a);

    printf("Conteúdo de 'a': %.2f\nEndereço de 'a': %p\n", a, &a);
    printf("Conteúdo de 'p': %p\n", p);

    p = &a;
    printf("Conteúdo do endereço apontado por 'p': %.2f\nConteúdo de 'p': %p\n", *p, p);


    return 0;
}