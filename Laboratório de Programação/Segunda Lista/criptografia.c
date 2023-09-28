#include <stdio.h>
#include <string.h>

/*
1- Recebe quantidade de linhas [check]
2- Recebe e escreve textos [check]
3- Acrescenta +3 nos caracteres de A a Z [check]
4- Inverte as linhas []
5- Decrescenta -1 nos chars da segunda metade da linha [check] 

Obs: Arranjo de frases deve conter de 1 até 10.000 frases,
cada uma com até 1000 caracteres
*/

char *revertStr(char *str);

int main()
{
    unsigned int i, j, numLinhas;

    do scanf("%d", &numLinhas);
    while (numLinhas < 1 || numLinhas > 10000);

    char frases[numLinhas][1000], letra, *revstr;
    
    for (i = 0; i < numLinhas; i++)
    {
        scanf(" %[^\n]", frases[i]);
    }

    for (i = 0; i < numLinhas; i++)
    {
        for (j = 0; j < strlen(frases[i]); j++)
        {

            letra = frases[i][j];

            if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z'))
            {
                frases[i][j] = letra + 3;
            }
        }

        revstr = frases[i];
        revstr = revertStr(revstr);

        for (j = strlen(frases[i]) - 1; j >= strlen(frases[i]) / 2; j--)
        {
            frases[i][j] = frases[i][j] - 1;
        }

        printf("%s\n", frases[i]);
    }
    
    return 0;
}

char *revertStr(char *str) {

    int i, j, temp;  

    for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    return str;
}