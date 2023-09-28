#include <stdio.h>

/*Escrever uma função que contabilize o número de vogais presentes em um arquivo de texto.*/

int vogais (char nomearquivo[]);

int main (){

    char arquivo[]="documento.txt";
    int resultado;

    resultado = vogais (arquivo);
    
    if (resultado==-1)
        printf ("Erro!");
    else
        printf ("Há %d vogais no arquivo\n", resultado);

return 0;
}

int vogais (char nomearquivo[]){

    FILE *arq = fopen (nomearquivo, "r");
    char caractere;
    int cont;

    if (arq==NULL)
        return -1;
    else {
            while (fscanf (arq, "%c", &caractere)!=EOF){
                if (caractere=='a' || caractere=='e' || caractere=='i' || caractere=='o' || caractere=='u' || caractere=='A' || caractere=='E' || caractere=='I' || caractere=='O' || caractere=='U' )
                    cont=cont+1;
            }
    }
        fclose (arq);
        return cont;

}
