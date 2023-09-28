import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner scanner = new Scanner(System.in);
        double ladoA, ladoB, ladoC;

        do {

            System.out.print("Lado A: ");
            ladoA = scanner.nextDouble();

            System.out.print("Lado B: ");
            ladoB = scanner.nextDouble();

            System.out.print("Lado C: ");
            ladoC = scanner.nextDouble();

        } while (!ehTriangulo(ladoA, ladoB, ladoC));

        Triangulo triangulo =  new Triangulo(ladoA, ladoB, ladoC);
        System.out.println("Área do triângulo: " + triangulo.calculaArea());

        scanner.close();
    }

    public static boolean ehTriangulo(double a, double b, double c) {
        
        if ((a + b > c) && (a + c > b) && (c + b > a))
            return true;
        else 
            System.out.println("Impossível formar triângulo\n");
        
        return false;
    }
}
