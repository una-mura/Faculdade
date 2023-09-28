#include <stdio.h>

/*Faça o algoritmo de uma função lógica que recebe como parâmetro o nome de um arquivo de números inteiros e gere dois outros arquivos. No primeiro arquivo, devem
estar os elementos de valor par e, no segundo arquivo, devem estar os elementos de valor ímpar. A função deve retornar VERDADEIRO em caso de sucesso da operação e FALSO, caso contrário.*/

int par_impar (char nomedoarquivo[]);

int main (){

char arquivo[]="lista.cad";
int resultado;

resultado=par_impar(arquivo);

if (resultado==0)
    printf ("FALSO!");
else
    printf ("VERDADEIRO!");


return 0;
}


int par_impar (char nomedoarquivo[]){

    FILE *arq=fopen(nomedoarquivo, "rb");
    FILE *arq1=fopen("pares.cad", "wb");
    FILE *arq2=fopen("impares.cad", "wb");    

    char n;

    if ((arq==NULL) || (arq1==NULL) || (arq2==NULL))
        return 0;
    else 
        while (!feof(arq)) {
            if (fread(&n, sizeof(int), 1,arq)){
                if (n%2==0)
                    fwrite (&n, sizeof(int), 1, arq1);
                else
                    fwrite (&n, sizeof(int), 1, arq2);  
            return 1;           
            }
            else
                return 0;            

        }


fclose (arq);
fclose (arq1);
fclose (arq2);


}
