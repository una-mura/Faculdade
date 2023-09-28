import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;

public class Jogo 
{
    public static void main(String[] args) throws Exception 
    {
        ArrayList<Monstro> monstros = new ArrayList<>() 
        {{
            add(new Monstro("Bulbassauro", "dinossauro fitoide", 1));
            add(new Monstro("Queimandra", "salamandra ígneo", 2));
            add(new Monstro("Esguicharuga", "quelônio aquático", 3));
            add(new Monstro("Borbolivre", "borboleta alucinógena", 4));
            add(new Monstro("Abelhoca", "abelha perfuradora", 5));
            add(new Monstro("Pombojato", "pombo veloz", 6));
            add(new Monstro("Ratatá", "rato de ataque", 7));
            add(new Monstro("Terrardal", "pardal do terror", 8));
            add(new Monstro("Arbok", "serpente peçonhenta", 9));
            add(new Monstro("Raito", "rato eletrizante", 10));
            add(new Monstro("Musareia", "musaranho arenoso", 11));
            add(new Monstro("Malucaco", "macaco maluco", 12));
            add(new Monstro("Tentacruel", "cefalópode cruel", 13));
            add(new Monstro("Golem", "criatura de pedra", 14));
            add(new Monstro("Dragomar", "dragão marinho", 15));
            add(new Monstro("Magikarpa", "carpa mágica", 16));
            add(new Monstro("Vaporeon", "criatura vaporosa", 17));
            add(new Monstro("Choqueon", "criatura elétrica", 18));
            add(new Monstro("Labaredeon", "criatura fogosa", 19));
            add(new Monstro("Miu", "felino lendário", 20));
        }};

        Scanner charScanner = new Scanner(System.in);
        Scanner stringScanner = new Scanner(System.in);
        Random randomMonstro = new Random();
        char input;
        boolean jogo = true;

        System.out.println("Saudações, jogadore!");
        System.out.print("Insira nome de personagem jogável: ");
            
        Jogador jogador = new Jogador(stringScanner.nextLine());
        Agenda agenda = new Agenda(jogador);

        while (jogo) 
        { 
            System.out.print("\nDeseja se aventurar? (s/n): ");
            input = charScanner.next().charAt(0);

            if (input == 's') 
            {
                agenda.registrarEncontro(monstros.get(randomMonstro.nextInt(20)));                
            }

            else if (input == 'n') 
            {
                System.out.println("Fim da aventura.");
                jogo = false;
            }

            else
                System.out.println("\nInput inválido!");
        } 

        System.out.println("\nRelatório de Encontros de " + jogador.getNome() + "\n");

        for (int i = 0; i < monstros.size(); i++) 
        {
            if (agenda.getColecao().containsKey(monstros.get(i))) 
            {
                String nomeMonstro = monstros.get(i).getNome();
                int numMonstro = monstros.get(i).getNumero();
                int numeroEncontros = agenda.getColecao().get(monstros.get(i)); 
                System.out.println(nomeMonstro + " (ID #" + numMonstro + ")" + " - " + numeroEncontros + " Encontro(s)");   
            }   
        }

        charScanner.close();
        stringScanner.close();
    }
}
