import java.util.ArrayList;

public class AnoLetivo
{
    private int ano;
    private ArrayList<Estudante> estudantes = new ArrayList<>();

    private Casa[] casas = 
    {
        new Casa("Vermelha"),
        new Casa("Amarela"),
        new Casa("Verde"),
        new Casa("Azul")
    };

    private String vencedora;
    private boolean encerrar;

    public AnoLetivo(int ano)
    {
        this.ano = ano;    
        this.encerrar = false;
        iniciarAno();
    }

    private void iniciarAno()
    {
        System.out.println("Iniciado o ano de " + ano + " em Hogwarts");
    }

    public void atribuirEstudante(Estudante estudante, Casa casa)
    {
        estudantes.add(estudante);
        estudante.setCasaEstudante(casa.getNome());
        casa.getEstudantes().add(estudante);
    }

    public void registrarComportamento(Estudante estudante, Comportamento comportamento)
    {
        int pontuacaoAtual, pontuacaoComportamento;
        pontuacaoComportamento = comportamento.getPontuacao();

        for (int i = 0; i < casas.length; i++) 
        {
            if (casas[i].getNome().equals(estudante.getCasaEstudante())) 
            {
                pontuacaoAtual = casas[i].getPontuacao();
                casas[i].setPontuacao(pontuacaoAtual + pontuacaoComportamento);
            }
        }
    }

    public boolean getEncerrar()
    {
        return encerrar;
    }

    public void encerrarAno()
    {
        this.encerrar = true;
    }

    public int getAno() 
    {
        return ano;
    }

    public ArrayList<Estudante> getEstudantes() 
    {
        return estudantes;
    }

    public Casa[] getCasas() 
    {
        return casas;
    }

    public String getVencedora() 
    {
        return vencedora;
    }
    public void setVencedora(String vencedora) 
    {
        this.vencedora = vencedora;
    }
}