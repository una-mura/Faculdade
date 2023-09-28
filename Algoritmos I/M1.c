#include <stdio.h>

int main()
{
    int contImpar = 0, contPar = 0, num, somaImpar = 0, somaPar = 0, mediaGeral;

    printf("Digite quantos números desejar, sejam eles ímpares ou pares.\n");        
    scanf("%d", &num);

    while (num != 0)
    {
        if (num != 0)
        {
            if (num % 2 == 0)
            {
                contPar = contPar = 1;
                somaPar = somaPar + num;
            }
            else
            {
                contImpar = contImpar + 1;
                somaImpar = somaImpar + num;
            }
        }
        
        scanf("%d", &num);
    }
    
    mediaGeral = (somaImpar + somaPar) / (contImpar + contPar);

    printf("Quantidade de pares: %d\n", contPar);
    printf("Quantidade de ímpares: %d\n", contImpar);
    printf("Média dos números pares: %d\n", somaPar / contPar);
    printf("Média geral dos números: %d\n", mediaGeral);
    
    return 0;
}