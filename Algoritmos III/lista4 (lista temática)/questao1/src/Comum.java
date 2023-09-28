public class Comum extends Cogumelo 
{
    public Comum(int quantidade) 
    {
        setAparencia("vermelho com pontos brancos");
        setNome("Cogumelo Comum");
        setQuantidade(quantidade);
        setTamanho("médio");

        System.out.println("Cadastrou " + quantidade + " unidade(s) de " + getNome());
        System.out.println("Características: " + "tamanho " + getTamanho() + ", " + getAparencia());
        System.out.println("Habilidade: aumenta o tamanho de quem o consome em 50%\n");
    }

    public void usarCogumelo(Agente agente) 
    {
        if (getQuantidade() > 0) 
        {
            setQuantidade(getQuantidade() - 1);
            agente.setAltura(agente.getAltura() * 1.5);

            agente.descreverAgente();
        }

        else 
        {
            System.out.println("O estoque deste cogumelo está zerado");
        }
    }
}
