import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner stringScanner = new Scanner(System.in);
        Scanner doubleScanner = new Scanner(System.in);

        double salario;
        String nome;

        System.out.print("Nome do analista: ");
        nome = stringScanner.nextLine();
        System.out.print("Salário do analista: ");
        salario = doubleScanner.nextDouble();

        Analista analista = new Analista(nome, salario);
        System.out.println("Valor do pagamento: " + analista.calculaPagamento() + "\n");
        

        System.out.print("Nome do gerente: ");
        nome = stringScanner.nextLine();
        System.out.print("Salário do gerente: ");
        salario = doubleScanner.nextDouble();

        Gerente gerente = new Gerente(nome, salario);
        System.out.println("Valor do pagamento: " + gerente.calculaPagamento());

        stringScanner.close();
        doubleScanner.close();
    }
}
