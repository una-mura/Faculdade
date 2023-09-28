#include <stdio.h>

/*Faça o algoritmo de uma função lógica que receba uma string 
que retorne VERDADEIRO se ela é palíndrome, ou FALSO em caso 
contrário.*/

int isPalindrome(char[10]);

int main() {

    char palavra[10];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    if (isPalindrome(palavra))
        printf("É palíndromo.\n");
    else
        printf("Não é palíndromo.\n");

    return 0;
}

int isPalindrome(char termo[10]) {

    int i, boolean, tamanho = 0;

    while (termo[tamanho] != '\0' && tamanho < 10)
        tamanho++;

    for (i = 0; i < tamanho/2; i++)
        if (termo[i] == termo[tamanho-i-1])
            boolean = 1;
        else
            boolean = 0;
           
    return boolean;
}