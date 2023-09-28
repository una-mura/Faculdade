import java.text.DecimalFormat;
import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        DecimalFormat f = new DecimalFormat("#0.00");
        Scanner doubleScanner = new Scanner(System.in);
        Scanner integScanner = new Scanner(System.in);
        int flag, i = 1;

        do {

            System.out.println("\nCírculo " + i);

            System.out.print("\nInsira o valor do raio: ");
            Circulo meuCirculo = new Circulo(doubleScanner.nextDouble());

            System.out.println("Valor do diâmetro: " + f.format(meuCirculo.getDiametro()));
            System.out.println("Valor da área: " + f.format(meuCirculo.getArea()));
            System.out.println("Valor do perímetro: " + f.format(meuCirculo.getPerimetro()));

            System.out.print("Digite 1 para recomeçar ou outro número para encerrar: ");
            flag = integScanner.nextInt();

            i++;

        } while (flag == 1);

        doubleScanner.close();
        integScanner.close();
    }
}
