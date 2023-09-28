import java.util.ArrayList;

public class Casa 
{
    private String nome;
    private ArrayList<Estudante> estudantes = new ArrayList<>();
    private int pontos;
    
    public Casa(String nome)
    {
        this.nome = nome;
        this.pontos = 0;
    }

    public void atribuirEstudante(Estudante estudante)
    {
        this.estudantes.add(estudante);
        estudante.setCasaEstudante(this.getNome()); 
    }
    public ArrayList<Estudante> getEstudantes() 
    {
        return estudantes;
    }

    public String getNome() 
    {
        return nome;
    }

    public void addPontos(int pontos) 
    {
        this.pontos = this.pontos + pontos;
    }
    public int getPontos() 
    {
        return pontos;
    }
}
