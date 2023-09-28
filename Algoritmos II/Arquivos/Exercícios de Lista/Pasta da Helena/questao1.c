#include <stdio.h> 

/* Faça um algoritmo que reúna os dados de dois arquivos de registros de mesma estrutura Matrícula e Nome num terceiro arquivo. */

    typedef struct Taluno {
        int matricula;
        char nome[30];
    } Taluno;

int main (){

    Taluno aluno1, aluno2, aluno3;
    int num1, num2, i;

    FILE *arquivo1;
    FILE *arquivo2;
    FILE *arquivo3;

    arquivo1 = fopen ("alunos1.cad", "wb");
    arquivo2 = fopen ("alunos2.cad", "wb");
    
    // escrevendo os dados no primeiro arquivo

    if (arquivo1==NULL)
        printf ("Erro ao abrir o arquivos!");
    else {
        printf ("Quantidade de alunos do primeiro arquivo: ");
        scanf ("%d", &num1);
        
        for (i=0;i<num1;i++){
            printf ("Matrícula: ");
            scanf ("%d", &aluno1.matricula);
            printf ("Nome: ");
            scanf (" %[^\n]s", aluno1.nome);
            fwrite (&aluno1, sizeof(struct Taluno), 1, arquivo1);
        }
    }
    fclose (arquivo1);

   
     // escrevendo os dados segundo arquivo

    if (arquivo2==NULL)
        printf ("Erro ao abrir o arquivos!");
    else {
        printf ("Quantidade de alunos do segundo arquivo: ");
        scanf ("%d", &num2);
        
        for (i=0;i<num2;i++){
            printf ("Matrícula: ");
            scanf ("%d", &aluno2.matricula);
            printf ("Nome: ");
            scanf (" %[^\n]s", aluno2.nome);
            fwrite (&aluno2, sizeof(struct Taluno), 1, arquivo2);
        }
    }
    fclose (arquivo2);

    // lendo os dois arquivos e gerando o terceiro

    arquivo1= fopen ("alunos1.cad", "rb");
    arquivo2 = fopen ("alunos2.cad", "rb");
    arquivo3 = fopen ("alunos3.cad", "wb"); 

    if   ((arquivo1==NULL) ||(arquivo2==NULL)|| (arquivo3==NULL))  
        printf ("Erro ao abrir o(s) arquivo(s)!");
    else {
        if (fread(&aluno1, sizeof(struct Taluno), 1, arquivo1) && (fread(&aluno2, sizeof(struct Taluno), 1, arquivo2))){
            while (!feof(arquivo1)){
                fwrite (&aluno1, sizeof (Taluno), 1, arquivo3);
                fread (&aluno1, sizeof (Taluno), 1, arquivo1);
            }
            while (!feof(arquivo2)){
                fwrite (&aluno2, sizeof (Taluno), 1, arquivo3);
                fread (&aluno2, sizeof (Taluno), 1, arquivo2);
            }
        }        

    }

    fclose (arquivo1);
    fclose (arquivo2);
    fclose (arquivo3);

    //imprimindo o conteúdo do terceiro arquivo para verificar

    arquivo3=fopen ("alunos3.cad", "rb");

    printf ("\n");
    printf ("DADOS DOS ALUNOS:\n ");
    printf ("\n");
    
    while (!feof(arquivo3)){ 
        if (fread(&aluno3, sizeof(struct Taluno), 1, arquivo3)) {


            printf ("Matricula: %d\n", aluno3.matricula);
            printf ("Nome: %s\n", aluno3.nome);
            printf ("\n");                   
        }
    }

    fclose(arquivo3);
            
    
        

return 0;
}
