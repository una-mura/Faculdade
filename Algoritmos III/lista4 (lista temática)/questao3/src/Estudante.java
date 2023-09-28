public class Estudante 
{
    private String nome, casaEstudante;
    private int matricula;
    
    public Estudante(String nome, int matricula)
    {
        this.nome = nome;
        this.matricula = matricula;
    }

    public void setCasaEstudante(String casaEstudante) 
    {
        this.casaEstudante = casaEstudante;
    }
    public String getCasaEstudante() 
    {
        return casaEstudante;
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
