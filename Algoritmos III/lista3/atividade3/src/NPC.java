import java.util.Random;

public class NPC extends Personagem {
    Random random = new Random();
    
    NPC(String nome) {
        super(nome);
        setForca(random.nextInt(100));
        setVida(random.nextInt(100));
    }
}
