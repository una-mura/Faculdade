public abstract class Planta implements Comestibilidade
{
    private String nome;

    public boolean ehComestivel() {
        return true;
    }

    public void setNome(String nome) 
    {
        this.nome = nome;
    }

    public String getNome() 
    {
        return nome;
    }
}
