import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner scanner = new Scanner(System.in);
        Disciplina myDisciplina = new Disciplina();
        Docente myDocente = new Docente();
        boolean flag = false;

        System.out.println("CRIAÇÃO DE TURMA\n");

        System.out.print("Disciplina: ");
        myDisciplina.setNome(scanner.nextLine());
        System.out.print("Código da Disciplina: ");
        myDisciplina.setCodigo(scanner.nextLine());
        
        System.out.print("Docente: ");
        myDocente.setNome(scanner.nextLine());
        System.out.print("Registro de Docência: ");
        myDocente.setRegistro(scanner.nextLine());

        System.out.print("Período: ");
        String periodo = scanner.nextLine();

        System.out.print("Máximo de Alunos: ");
        int maxEstudantes = scanner.nextInt();
        scanner.nextLine(); // Consumir a quebra de linha após o número

        Turma myTurma = new Turma();
        myTurma.criarTurma(myDisciplina, myDocente, periodo, maxEstudantes);

        do {
            System.out.print("\nAdicionar aluno?\n: ");
            String resposta = scanner.nextLine();

            if (resposta.equalsIgnoreCase("sim")) {
                
                Estudante myEstudante = new Estudante(); // Criar uma nova instância a cada iteração
                System.out.print("\nNome: ");
                myEstudante.setNome(scanner.nextLine());

                System.out.print("Matrícula: ");
                myEstudante.setMatricula(scanner.nextLine());

                myTurma.matriculaEstudante(myEstudante);
            } 
            else if (resposta.equalsIgnoreCase("nao")) {
                flag = true;
            }
        } while (!flag);

        System.out.println("Verificação de matrícula: " + myTurma.verificaMatricula("202211316020"));

        scanner.close();
    }
}
