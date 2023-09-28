public class Mega extends Cogumelo 
{
    public Mega(int quantidade)
    {
        setAparencia("amarelo com pontos vermelhos");
        setNome("Mega Cogumelo");
        setQuantidade(quantidade);
        setTamanho("grande");

        System.out.println("Cadastrou " + quantidade + " unidade(s) de " + getNome());
        System.out.println("Características: " + "tamanho " + getTamanho() + ", " + getAparencia());
        System.out.println("Habilidade: aumenta o tamanho de quem o consome em 1000%\n");
    }

    public void usarCogumelo(Agente agente)
    {
        if (getQuantidade() > 0) 
        {
            setQuantidade(getQuantidade() - 1);
            agente.setAltura(agente.getAltura() * 11);

            agente.descreverAgente();

        }

        else 
        {
            System.out.println("O estoque deste cogumelo está zerado");
        }
    }    
}
