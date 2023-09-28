#include <stdio.h>

/*
Faça um procedimento que, dados dois arquivos ordenados por um campo Matrícula,
gere um terceiro arquivo também ordenado. É incorreta a inserção de valores
duplicados.
*/

typedef struct tRegistro {
    
    int matricula;
    char nome[30];
} registro;

void une_arq(char nome_arq1[], char nome_arq2[], char nome_arq3[]) {

    FILE *arq1 = fopen(nome_arq1, "rb");
    FILE *arq2 = fopen(nome_arq2, "rb");
    FILE *arq3;

    registro aluno1, aluno2;

    if (arq1 != NULL && arq2 != NULL) {
        
        arq3 = fopen(nome_arq3, "wb");

        if (arq3 != NULL) {

            //IF grandão pra ver se consegue ler os dois
            if (fread(&aluno1, sizeof(struct tRegistro), 1, arq1) && fread(&aluno2, sizeof(struct tRegistro), 1, arq2)) {

                while (!feof(arq1) && !feof(arq2)) {

                    if (aluno1.matricula < aluno2.matricula) {
                    
                        fwrite(&aluno1, sizeof(struct tRegistro), 1, arq3);
                        fread(&aluno1, sizeof(struct tRegistro), 1, arq1);
                    }    
                    else {

                        fwrite(&aluno2, sizeof(struct tRegistro), 1, arq3);

                        if (aluno1.matricula == aluno2.matricula)
                            fread(&aluno1, sizeof(struct tRegistro), 1, arq1);

                        fread(&aluno2, sizeof(struct tRegistro), 1, arq2);
                    }
                }

                //se for EOF do arq1, continua escrevendo o 2 até o EOF dele
                while (!feof(arq2)) {
                               
                    fread(&aluno2, sizeof(struct tRegistro), 1, arq2);
                    fwrite(&aluno2, sizeof(struct tRegistro), 1, arq3);
                }       

                //se for EOF do arq2, continua escrevendo o 1 até o EOF dele    
                while (!feof(arq1)) {
                                
                    fread(&aluno1, sizeof(struct tRegistro), 1, arq1);
                    fwrite(&aluno1, sizeof(struct tRegistro), 1, arq3);
                }      
            }
        }
    }

    fclose(arq1); 
    fclose(arq2); 
    fclose(arq3);
}