public class Venenoso extends Cogumelo 
{
    public Venenoso(int quantidade)
    {
        setAparencia("roxo escuro com pontos amarelos");
        setNome("Cogumelo Venenoso");
        setQuantidade(quantidade);
        setTamanho("médio");

        System.out.println("Cadastrou " + quantidade + " unidade(s) de " + getNome());
        System.out.println("Características: " + "tamanho " + getTamanho() + ", " + getAparencia());
        System.out.println("Habilidade: diminui a vitalidade de quem o consome em 50%\n");
    }

    public void usarCogumelo(Agente agente)
    {
        if (this.getQuantidade() > 0) 
        {
            this.setQuantidade(this.getQuantidade() - 1);
            agente.setVitalidade((int) (agente.getVitalidade() * 0.5));

            agente.descreverAgente();
        }

        else 
        {
            System.out.println("O estoque deste cogumelo está zerado");
        }
    }
}
