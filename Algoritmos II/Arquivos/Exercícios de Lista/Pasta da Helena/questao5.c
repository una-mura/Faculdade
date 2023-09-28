#include <stdio.h>

/* Faça um algoritmo de uma função inteira que receba o nome de um arquivo de inteiros e um valor inteiro e retorne quantos números são maiores que o valor recebido por parâmetro. Em caso de erro, deve ser retornado o valor -1.*/

int maior (char arq[], int);

int main (){

    char arquivo[]="numeros.cad";
    int N, resultado;

    printf ("Digite o número a ser usado para comparar: ");
    scanf ("%d", &N);
    
    resultado=maior(arquivo, N);  

    if (resultado==-1)
        printf ("Erro!");
    else
        printf ("Quantidade de números maiores que %d é igual a %d\n", N, resultado);

return 0;
}

int maior (char arq[], int num) {
    
    int caractere, cont=0;

    FILE *arqv = fopen(arq, "rb");


    if (arqv==NULL)
        return -1;
    else {
        if (fread(&caractere,sizeof(int), 1, arqv)){
            while (fread(&caractere,sizeof(int), 1, arqv)){
                if (caractere > num)
                    cont=cont+1;
            }
            return cont;

        }
        else
            return -1;
    }   
}
