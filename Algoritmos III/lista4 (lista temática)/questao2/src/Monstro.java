public class Monstro
{
    private String nome, descricao;
    private int numero;

    public Monstro(String nome, String descricao, int numero)
    {
        this.nome = nome;
        this.descricao = descricao;
        this.numero = numero;
    }

    public void setDescricao(String descricao) 
    {
        this.descricao = descricao;
    }
    public String getDescricao() 
    {
        return descricao;
    }

    public void setNome(String nome) 
    {
        this.nome = nome;
    }
    public String getNome() 
    {
        return nome;
    }

    public void setNumero(int numero) 
    {
        this.numero = numero;
    }
    public int getNumero() 
    {
        return numero;
    }
}