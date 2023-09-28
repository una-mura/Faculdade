public abstract class Cogumelo {
    private String aparencia, nome, tamanho;
    private int quantidade;

    abstract void usarCogumelo(Agente agente);
    
    protected void aumentarQuantidade(int quantidade) 
    {
        setQuantidade(this.quantidade + quantidade);
    }

    protected void setAparencia(String aparencia) 
    {
        this.aparencia = aparencia;
    }
    protected String getAparencia() 
    {
        return aparencia;
    }

    protected void setNome(String nome) 
    {
        this.nome = nome;
    }
    protected String getNome() 
    {
        return nome;
    }

    protected void setQuantidade(int quantidade) 
    {
        this.quantidade = quantidade;
    }
    protected int getQuantidade() 
    {
        return quantidade;
    }

    protected void setTamanho(String tamanho) 
    {
        this.tamanho = tamanho;
    }
    protected String getTamanho() 
    {
        return tamanho;
    }
}
