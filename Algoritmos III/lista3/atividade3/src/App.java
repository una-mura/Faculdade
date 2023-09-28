public class App {
    public static void main(String[] args) throws Exception {
        Personagem p01 = new PersonagemJogavel("Jogavius");
        Personagem p02 = new NPC("Mercator");

        System.out.printf("Durante sua peregrinação, %s cruza com um mercador chamado %s, que lhe saúda com louvor\n", 
        p01.getNome(), p02.getNome());
    }
}
