public class Comportamento 
{
    private String tipo;
    private int pontos;

    public Comportamento(String tipo, int pontos)
    {
        this.tipo = tipo;
        this.pontos = pontos;
    }

    public void setPontos(int pontos) 
    {
        this.pontos = pontos;
    }
    public int getPontos() 
    {
        return pontos;
    }

    public void setTipo(String tipo) 
    {
        this.tipo = tipo;
    }
    public String getTipo() 
    {
        return tipo;
    }
}
