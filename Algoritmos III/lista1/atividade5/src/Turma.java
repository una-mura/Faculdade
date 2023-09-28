public class Turma {
    
    private Disciplina disciplina;
    private Docente docente;
    private String periodo;
    private int maxEstudantes;
    private Estudante[] estudantes;

    public Disciplina getDisciplina() {return disciplina;}
    public Docente getDocente() {return docente;}
    public String getPeriodo() {return periodo;}
    public int getMaxEstudantes() {return maxEstudantes;}
    public Estudante[] getEstudantes() {return estudantes;}

    public void criarTurma(Disciplina disciplina, Docente docente, String periodo, int maxEstudantes) {
        this.disciplina = disciplina;
        this.docente = docente;
        this.periodo = periodo;
        this.maxEstudantes = maxEstudantes;
        this.estudantes = new Estudante[maxEstudantes]; // Agora o array é criado com o tamanho correto
    }

    public void matriculaEstudante(Estudante estudante) {
        if (estudantes.length < maxEstudantes) {
            estudantes[estudantes.length - 1] = estudante; // Correção do índice
        }
        else {
            System.out.println("Turma lotada");
        }
    }

    /*public void estudantesMatriculados() {
        for (int i = 0; i < estudantes.length; i++) {
            if (estudantes[i] != null) {
                String nome = estudantes[i].getNome();
                String matricula = estudantes[i].getMatricula();
                System.out.printf("\nNome: %s\nMatrícula: %s\n", nome, matricula);
            }
        }
    }*/

    public boolean verificaMatricula(String matricula) {
        for (int i = 0; i < estudantes.length; i++) {
            if (estudantes[i] != null && estudantes[i].getMatricula().equals(matricula)) {
                return true;
            }
        }
        return false;    
    }
}
