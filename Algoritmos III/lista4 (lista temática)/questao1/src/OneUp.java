public class OneUp extends Cogumelo
{
    public OneUp(int quantidade)
    {
        setAparencia("verde com símbolo \"1-UP\" branco");
        setNome("Cogumelo 1-Up");
        setQuantidade(quantidade);
        setTamanho("médio");

        System.out.println("Cadastrou " + quantidade + " unidade(s) de " + getNome());
        System.out.println("Características: " + "tamanho " + getTamanho() + ", " + getAparencia());
        System.out.println("Habilidade: restaura a vitalidade de quem consome o em 100%\n");
    }

    public void usarCogumelo(Agente agente)
    {
        if (getQuantidade() > 0) 
        {
            setQuantidade(getQuantidade() - 1);
            agente.setVitalidade(100);

            agente.descreverAgente();
        }

        else 
        {
            System.out.println("O estoque deste cogumelo está zerado");
        }
    }
}
