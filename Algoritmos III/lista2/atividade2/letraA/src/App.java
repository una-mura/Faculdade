public class App {
    public static void main(String[] args) throws Exception {
        
        Conta c1 = new Conta("22222", "6666666");
        
        c1.fazDeposito(600);
        System.out.println(c1.getSaldo());
        c1.fazDeposito(600);
        System.out.println(c1.getSaldo());
    }
}
