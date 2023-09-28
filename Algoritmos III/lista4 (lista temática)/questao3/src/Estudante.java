public class Estudante
{
    private String nome, casaEstudante;
    private int matricula;

    public Estudante(String nome, int matricula)
    {
        this.nome = nome;
        this.matricula = matricula;
    }

    public String getCasaEstudante() 
    {
        return casaEstudante;
    }
    public void setCasaEstudante(String casaEstudante) 
    {
        this.casaEstudante = casaEstudante;
    }

    public int getMatricula() 
    {
        return matricula;
    }

    public String getNome() 
    {
        return nome;
    }
}