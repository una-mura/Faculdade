#include <stdio.h>

/*Gere um arquivo funcionário, em que cada registro armazene o código do funcionário  (inteiro entre 1 e 140), seu nome (30 caracteres), endereço (45 caracteres), salário  (real) e a função (inteiro: 1-operador / 2-contador / 3-vendedor / 4-gerente), com no  mínimo 10 funcionários, tendo pelo menos 3 com a função de gerente. O acesso aos dados dos funcionários será feito com base no seu código, utilizando acesso direto.  Os dados de um funcionário estarão na posição do seu código.

A partir dos dados armazenados no arquivo funcionário (exercício anterior), gere um  relatório que liste o nome e o salário dos funcionários cuja função é “gerente”.


Faça um programa que atualize o salário de um funcionário no arquivo dos exercícios  anteriores. O código do funcionário e o novo salário devem ser lidos do teclado.

*/

	typedef struct Tfuncionario {
		int codigo;
		char nome[30];
		char endereco[45];
		float salario;
		int funcao;
	} Tfuncionario;

int main () {

	FILE *arquivo;
	int num,i,qtd=0;
	
	arquivo=fopen("funcionario.cad", "wb");
	
	if (arquivo==NULL)
		printf ("Erro ao criar o arquivo!" );
	
	printf ("Digite a quantidade de funcionários que serão cadastrados: ");
	scanf ("%d", &num);
	
	while (num<10) {
		printf ("Quantidade inválida! É necessário cadastrar pelo menos 10 funcionários!\n Digite novamente a quantidade de funcionários: " );
		scanf ("%d", &num);
	}
	
	Tfuncionario funcionario[num];

// cadastrando os funcionários
	
do {
	
	for (i=1;i<=num;i++) {

   printf ("DADOS DO FUNCIONÁRIO\n");
	
		do {

			printf ("Código do funcionário: ");
			scanf ("%d", &funcionario[i].codigo);
		} while (funcionario[i].codigo<1 || funcionario[i].codigo>140);
		
		printf ("Nome do funcionário: ");
		scanf (" %s", funcionario[i].nome);
		
		printf ("Endereço do funcionário: ");
		scanf (" %s", funcionario[i].endereco);
		
		printf ("Salário do funcionário: ");
		scanf ("%f", &funcionario[i].salario);
		
		do {
			printf ("Função do funcionário: ");
			scanf ("%d", &funcionario[i].funcao);
		} while (funcionario[i].codigo<1 || funcionario[i].codigo>4);
		
		if (funcionario[i].codigo==4);
			qtd=qtd+1;	
		
		fwrite (&funcionario[i], sizeof (struct Tfuncionario), 1, arquivo);
	}
	
} while (qtd<3);
	
fclose (arquivo);

// listar o nome e o salário de todos os gerentes (possuem funcao 4)

    arquivo = fopen ("funcionario.cad", "r");
    
    if (arquivo==NULL)
        printf ("Erro ao ler o arquivo!");
    
    if (fread (&funcionario[num], sizeof (struct Tfuncionario),1, arquivo);
        while (!feof(arquivo){
            for (i=1;i<=num;i++){        
                if (funcionario[i].funcao==4){
                    printf ("Nome do funcionário: %s\n", funcionario[i].nome);
                    printf ("Salário do funcionário: %.2f\n", funcionario[i].salario);                
                }
            }
        }        
    
    
	
	
    
return 0;
}