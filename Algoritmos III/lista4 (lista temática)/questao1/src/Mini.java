public class Mini extends Cogumelo 
{
    public Mini(int quantidade)
    {
        setAparencia("azul com pontos brancos");
        setNome("Mini Cogumelo");
        setQuantidade(quantidade);
        setTamanho("pequeno");

        System.out.println("Cadastrou " + quantidade + " unidade(s) de " + getNome());
        System.out.println("Características: " + "tamanho " + getTamanho() + ", " + getAparencia());
        System.out.println("Habilidade: diminui o tamanho de quem o consome em 50%\n");
    }

    public void usarCogumelo(Agente agente)
    {
        if (getQuantidade() > 0) 
        {
            setQuantidade(getQuantidade() - 1);
            agente.setAltura(agente.getAltura() * 0.5);

            agente.descreverAgente();

        }

        else 
        {
            System.out.println("O estoque deste cogumelo está zerado");
        }
    }    
}
