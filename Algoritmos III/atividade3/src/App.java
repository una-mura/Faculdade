public class App {
    public static void main(String[] args) throws Exception {
        Pessoa pessoa1 = new Pessoa();
        Pessoa pessoa2 = new Pessoa();

        pessoa1.setNome("Amanda");
        pessoa1.setMassa(45);
        pessoa1.setAltura(155);

        pessoa2.setNome("Natalie");
        pessoa2.setMassa(68);
        pessoa2.setAltura(169);

        System.out.printf("%s possui %.2f quilos e %.2f metros de altura\n", 
        pessoa1.getNome(), pessoa1.getMassa(), pessoa1.getAltura()/100);

        System.out.printf("%s possui %.2f quilos e %.2f metros de altura\n", 
        pessoa2.getNome(), pessoa2.getMassa(), pessoa2.getAltura()/100);

        if (pessoa1.getAltura() > pessoa2.getAltura())
            System.out.printf("%s é mais alta do que %s\n", pessoa1.getNome(), pessoa2.getNome());
        else
            System.out.printf("%s é mais alta do que %s\n", pessoa2.getNome(), pessoa1.getNome());

        if (pessoa1.getMassa() < pessoa2.getMassa())
            System.out.printf("%s é mais leve do que %s\n", pessoa1.getNome(), pessoa2.getNome());
        else
            System.out.printf("%s é mais leve do que %s\n", pessoa2.getNome(), pessoa1.getNome());
    }
}
