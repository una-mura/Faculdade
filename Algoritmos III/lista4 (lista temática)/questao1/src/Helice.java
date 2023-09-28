public class Helice extends Cogumelo
{
    public Helice(int quantidade)
    {
        setAparencia("laranja com pontos amarelos e uma hélice no píleo");
        setNome("Cogumelo Hélice");
        setQuantidade(quantidade);
        setTamanho("médio");

        System.out.println("Cadastrou " + quantidade + " unidade(s) de " + getNome());
        System.out.println("Características: " + "tamanho " + getTamanho() + ", " + getAparencia());
        System.out.println("Habilidade: oferece o poder de voar para quem o consome\n");
    }

    public void usarCogumelo(Agente agente)
    {
        if (getQuantidade() > 0) 
        {
            setQuantidade(getQuantidade() - 1);
            agente.setVoar(true);

            agente.descreverAgente();

        }

        else 
        {
            System.out.println("O estoque deste cogumelo está zerado");
        }
    }        
}
