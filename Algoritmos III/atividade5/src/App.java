import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner intScanner = new Scanner(System.in);
        Scanner doubleScanner = new Scanner(System.in);

        double altura, base, ladoA, ladoB, ladoC, raio;
        int codigoLoop, codigoForma;

        System.out.println("O Criador de Formas Geométricas\n");

        do {

            System.out.print("Deseja criar uma forma geométrica? Digite 0 para SIM e 1 para NÃO: ");
            codigoLoop = intScanner.nextInt();

            switch (codigoLoop) {

                case 0:
                    System.out.print("Digite 0 para criar CÍRCULO, 1 para TRIÂNGULO e 2 para RETÂNGULO: ");
                    codigoForma =  intScanner.nextInt();

                    switch (codigoForma) {

                        case 0:
                            System.out.print("Informe o valor do RAIO do círculo: ");
                            raio = doubleScanner.nextDouble();

                            if (raio >= 0) 
                            {
                                Circulo meuCirculo = new Circulo(raio);
                                System.out.println("\n" + meuCirculo.descreveForma() + "\n");                          
                            }
                            else
                                System.out.println("Impossível formar círculo!\n");
                            
                            break;

                        case 1:
                            System.out.println("Informe o valor de cada LADO do triângulo.");
                            System.out.print("Lado A: ");
                            ladoA = doubleScanner.nextDouble();
                            System.out.print("Lado B: ");
                            ladoB = doubleScanner.nextDouble();
                            System.out.print("Lado C: ");
                            ladoC = doubleScanner.nextDouble();

                            if (ehTriangulo(ladoA, ladoB, ladoC)) 
                            {
                                Triangulo meuTriangulo = new Triangulo(ladoA, ladoB, ladoC);
                                System.out.println("\n" + meuTriangulo.descreveForma() + "\n");                          
                            } 
                            else
                                System.out.println("Impossível formar triângulo!\n");

                            break;

                        case 2:
                            System.out.print("Informe o valor da BASE do retângulo: ");
                            base = doubleScanner.nextDouble();
                            System.out.print("Informe o valor da ALTURA do retângulo: ");
                            altura = doubleScanner.nextDouble();

                            if (base > 0 && altura > 0) 
                            {
                                Retangulo meuRetangulo = new Retangulo(base, altura);    
                                System.out.println("\n" + meuRetangulo.descreveForma() + "\n");                          
                            } 
                            else
                                System.out.println("Impossível formar retângulo!\n");

                            break;
                    
                        default:
                            System.out.println("Código inválido!\n");
                    }

                    break;

                case 1:
                    break;
            
                default:
                    System.out.println("Código inválido!\n");
            }

        } while (codigoLoop != 1);

        intScanner.close();
        doubleScanner.close();
    }

    private static boolean ehTriangulo(double ladoA, double ladoB, double ladoC) {
        return (ladoA + ladoB > ladoC) && (ladoA + ladoC > ladoB) && (ladoB + ladoC > ladoA);
    }
}
