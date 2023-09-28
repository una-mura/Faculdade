public class Simulador 
{
    private boolean ligado;

    public Simulador()
    {
        this.ligado = true;
    }

    public void testarCogumelo(Agente agente, Cogumelo cogumelo)
    {
        cogumelo.usarCogumelo(agente);
    }
    
    protected void setLigado(boolean ligado) 
    {
        this.ligado = ligado;
    }
    protected boolean getLigado() 
    {
        return ligado;
    }
}
