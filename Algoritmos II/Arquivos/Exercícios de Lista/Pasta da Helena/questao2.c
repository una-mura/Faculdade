#include <stdio.h>

/*Faça um procedimento que, dados dois arquivos ordenados por um campo Matrícula, gere um terceiro arquivo também ordenado. É incorreta a inserção de valores duplicados.*/
void unir (char[], char[], char[]); 

    typedef struct Taluno{
        int matricula;
        char nome[30];
    } Taluno;

int main (){ 

    char arquivo1[] = "alunos1.cad";
    char arquivo2[] = "alunos2.cad";
    char arquivo3[] = "alunos3.cad";

    unir(arquivo1, arquivo2, arquivo3);


return 0;
}

//procedimento

void unir (char nomearq1[], char nomearq2[], char nomearq3[]) { //nomearq é a variavel que contem uma string

    FILE *arq1=fopen (nomearq1, "rb");
    FILE *arq2=fopen (nomearq2, "rb"); 
    FILE *arq3;
    
    Taluno a1, a2;

    if (arq1 !=NULL && arq2!=NULL){
        arq3 = fopen (nomearq3, "wb");

    if (arq3 !=NULL){
        if ((fread(&a1, sizeof (struct Taluno), 1, arq1)) && (fread(&a2, sizeof (struct Taluno), 1, arq2))){

        // enquanto nenhum dos arquivos chegar ao fim

            while ((!feof(arq1)) && (!feof(arq2))){

                if (a1.matricula <a2.matricula){
                    fwrite (&a1, sizeof (struct Taluno), 1, arq3);
                    fread(&a1, sizeof (struct Taluno), 1, arq1);  
                }
                else {
                    fwrite (&a2, sizeof (struct Taluno), 1, arq3);  
                    if (a1.matricula==a2.matricula)
                        fread(&a1, sizeof (struct Taluno), 1, arq1); 
                    fread(&a2, sizeof (struct Taluno), 1, arq2);                           
                }          
            }
        // quando o segundo arquivo terminar primeiro, tem que printar o primeiro sem comparar

            if (!feof (arq1)){
                fwrite (&a1, sizeof (struct Taluno), 1, arq3);
                while (!feof(arq1)){
                    fread(&a1, sizeof (struct Taluno), 1, arq1);
                    fwrite (&a1, sizeof (struct Taluno), 1, arq3);        
                }

            }
        // quando o primeiro arquivo terminar primeiro, tem que printar o segundo sem comparar

            if (!feof (arq2)){
                fwrite (&a2, sizeof (struct Taluno), 1, arq3);
                while (!feof(arq2)){
                    fread(&a2, sizeof (struct Taluno), 1, arq2);
                    fwrite (&a2, sizeof (struct Taluno), 1, arq3);        
                }

            }

        }

    }
    }
fclose (arq1);
fclose (arq2);
fclose (arq3);

}
