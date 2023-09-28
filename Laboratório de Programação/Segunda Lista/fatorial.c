#include <stdio.h>

/*
Determine a menor quantidade de fatoriais necessária para escrever a soma de um número N.

Observações:

- A quantidade de fatoriais é um número K

Resolução:

Esse algoritmo percorre os fatoriais de 8 a 1, e como o intuito do exercício é fazer uma soma,
é utilizado o processo inverso, subtraindo os maiores fatoriais possíveis que sejam menores que
o próprio número fornecido pelo usuário
*/

int fat(int n);

int main() {

    int fatorial, i, num;
    int fatores = 0;

    scanf("%d", &num);

    //Esse loop percorre os fatoriais de 8 até 1 usando 'i', e reiniciando o processo com um break
    while (num != 0) {

        for (i = 8; i >= 0; i--) {
            
            fatorial = fat(i); //chama a função fat pra fazer um i!

            //Quando encontra o maior fatorial menor ou igual a num...
            if (num >= fatorial) {

                num = num - fatorial;
                fatores++; //contabiliza +1 fator    
                break; //sai do for e reinicia o processo do loop while
            }
        }
    }

    printf("%d\n", fatores);

    return 0;
}

int fat(int n) {

    if (n <= 1)
        return 1;
    else
        return n * fat(n-1);
}