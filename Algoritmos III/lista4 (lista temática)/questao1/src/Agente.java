public class Agente {
    private String nome;
    private double altura;
    private int vitalidade;
    private boolean voar;

    public Agente(String nome, double altura)
    {
        this.nome = nome;
        this.altura = altura;
        this.vitalidade = 100;
        this.voar = false;
    }

    public void descreverAgente()
    {
        System.out.println("Nome: " + nome);
        System.out.println("Altura: " + altura);
        System.out.println("Vitalidade: " + vitalidade);
        
        if (voar)
            System.out.println("Voa: sim");
        else
            System.out.println("Voa: não");
    }

    protected String getNome() 
    {
        return nome;
    }

    protected void setAltura(double altura) 
    {
        this.altura = altura;
    }
    protected double getAltura() 
    {
        return altura;
    }

    protected void setVitalidade(int vitalidade) 
    {
        this.vitalidade = vitalidade;
    }
    protected int getVitalidade() 
    {
        return vitalidade;
    }

    protected void setVoar(boolean voar) 
    {
        this.voar = voar;
    }
    protected boolean getVoar()
    {
        return voar;
    }
}
