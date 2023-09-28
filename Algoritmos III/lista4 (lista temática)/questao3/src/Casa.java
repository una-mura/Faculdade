import java.util.ArrayList;

public class Casa
{
    private String nome;
    private ArrayList<Estudante> estudantes;
    private int pontuacao;

    public Casa(String nome)
    {
        this.nome = nome;
    }

    public void atribuirEstudante(Estudante estudante)
    {
        estudantes.add(estudante);
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

    public int getPontuacao() 
    {
        return pontuacao;
    }

    public void setPontuacao(int pontuacao) 
    {
        this.pontuacao = pontuacao;
    }
}