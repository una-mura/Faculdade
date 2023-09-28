import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner intScanner = new Scanner(System.in);
        Scanner stringScanner = new Scanner(System.in);
        Scanner doubleScanner = new Scanner(System.in);

        int codigoPedido, codigoBebida, volume;
        String sabor, tipo;
        double preco;
        
        System.out.print("Distribuidora Uemura\n");
        
        do 
        {
            System.out.print("\nDigite 1 para cadastrar bebida, 2 para sair: ");
            codigoPedido = intScanner.nextInt();

            switch (codigoPedido) {
                case 1:
                    System.out.print("Digite 1 para cadastrar refrigerante, 2 para bebida alcoólica: ");
                    codigoBebida = intScanner.nextInt();

                    switch (codigoBebida) {
                        case 1:
                            System.out.print("Sabor de refri: ");
                            sabor = stringScanner.nextLine();

                            System.out.print("Preço: R$");
                            preco = doubleScanner.nextDouble();

                            System.out.print("Volume (em mL): ");
                            volume = intScanner.nextInt();

                            Refrigerante meuRefri = new Refrigerante(preco, volume, sabor);
                            System.out.printf("Cadastrou refrigerante de %s de %d ml por R$%.2f.\n", 
                            meuRefri.getSabor(), meuRefri.getVolume(), meuRefri.getPreco());
                            break;

                        case 2:
                            System.out.print("Tipo de álcool: ");
                            tipo = stringScanner.nextLine();

                            System.out.print("Preço: R$");
                            preco = doubleScanner.nextDouble();

                            System.out.print("Volume (em mL): ");
                            volume = intScanner.nextInt();

                            Alcoolica meuAlcool = new Alcoolica(preco, volume, tipo);
                            System.out.printf("Cadastrou %s de %d ml por R$%.2f.\n", 
                            meuAlcool.getTipo(), meuAlcool.getVolume(), meuAlcool.getPreco());
                            break;
                    
                        default:
                            System.out.println("Código inválido");
                    }

                    break;

                case 2: 
                    break;

                default:
                    System.out.println("Código inválido");
            }

        } while (codigoPedido != 2);

        intScanner.close();
        doubleScanner.close();
        stringScanner.close();
    }
}
