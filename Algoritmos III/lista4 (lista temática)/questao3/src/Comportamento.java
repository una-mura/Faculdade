public class Comportamento
{
    private String nome;
    private int pontuacao;

    public Comportamento(String nome, int pontuacao)
    {
        this.nome = nome;
        this.pontuacao = pontuacao;
    }

    public String getNome() 
    {
        return nome;
    }

    public int getPontuacao() 
    {
        return pontuacao;
    }
}