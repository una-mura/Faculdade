public class AnoLetivo 
{
    private int ano;
    private Casa vencedor;
    private boolean anoLetivo;

    private Casa[] casas = 
    {
        new Casa("Azul"),
        new Casa("Amarela"),
        new Casa("Vermelha"),
        new Casa("Verde")
    };

    public AnoLetivo(int ano)
    {
        this.ano = ano;
    }

    public void iniciarAno()
    {
        System.out.println("Iniciado o ano letivo de " + ano);
        this.anoLetivo = true;
    }

    public void registrarComportamento(Estudante estudante, Comportamento comportamento)
    {
        for (Casa casa : casas) 
        {
            if (estudante.getCasaEstudante() == casa.getNome() && casa.getEstudantes().contains(estudante)) 
            {
                casa.addPontos(comportamento.getPontos());
            }    
        }
    }

    public void encerrarAno()
    {
        this.anoLetivo = false;
        this.vencedor = casas[0];
        
        for (Casa casa : casas) 
        {
            if (casa.getPontos() > vencedor.getPontos()) 
            {
                this.vencedor = casa;    
            }
        }

        System.out.println("\nTotal de Pontos\n");

        for (Casa casa : casas) 
        {
            System.out.println(casa.getNome() + ": " + casa.getPontos());    
        }

        System.out.println("\nRanking\n");

        for (int i = 0; i < this.casas.length; i++) 
        {
            //continuar daqui    
        }
    }

    public Casa getCasas(int i) 
    {
        return casas[i];
    }

    public void setVencedor(Casa vencedor) 
    {
        this.vencedor = vencedor;
    }
    public Casa getVencedor() 
    {
        return vencedor;
    }

    public boolean getAnoLetivo()
    {
        return anoLetivo;
    }
}
