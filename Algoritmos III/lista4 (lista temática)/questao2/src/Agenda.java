import java.util.HashMap;

public class Agenda 
{
    private Jogador jogador;
    private HashMap<Monstro, Integer> colecao = new HashMap<>();

    public Agenda(Jogador jogador)
    {
        this.jogador = jogador;
    }

    public void registrarEncontro(Monstro monstro)
    {
        if (colecao.containsKey(monstro)) 
        {
            colecao.replace(monstro, colecao.get(monstro), colecao.get(monstro) + 1);
            System.out.println("Encontro com " + monstro.getNome() + " foi registrado na agenda de " + jogador.getNome() + ".");
        }

        else
        {
            colecao.put(monstro, 1);
            System.out.println("Encontrou " + monstro.getNome() + ", " + monstro.getDescricao() + "!");
            System.out.println(monstro.getNome() + " foi registrado pela primeira vez à agenda de " + jogador.getNome() + ".");
        }
    }

    public HashMap<Monstro, Integer> getColecao() 
    {
        return colecao;
    }
}
