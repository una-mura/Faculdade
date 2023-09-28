import java.util.Scanner;

public class Escola 
{
    public static void main(String[] args) throws Exception 
    {
        Scanner intScanner = new Scanner(System.in);
        Scanner stringScanner = new Scanner(System.in);

        int opcaoPrograma, opcaoCasa, opcaoEstudante;
        int matricula = 1, pontos;
        String nome, comportamento;

        AnoLetivo anoL = new AnoLetivo(2023);
        anoL.iniciarAno();

        while (anoL.getAnoLetivo()) 
        {
            System.out.println("\nOpções\n");
            
            System.out.println("1 - Cadastrar estudante");
            System.out.println("2 - Atribuir comportamento a estudante");
            System.out.println("3 - Encerrar ano letivo\n");

            System.out.print("Seleção: ");
            opcaoPrograma = intScanner.nextInt();

            if (opcaoPrograma == 1) 
            {
                System.out.print("\nNome: ");
                nome = stringScanner.nextLine();

                System.out.println("Selecione Casa\n");

                System.out.println("1 - Azul");
                System.out.println("2 - Amarelo");
                System.out.println("3 - Vermelho");
                System.out.println("4 - Verde\n");

                System.out.print("Selecão: ");
                opcaoCasa = intScanner.nextInt();

                if (opcaoCasa >= 1 && opcaoCasa <= 4)
                    anoL.getCasas(opcaoCasa).atribuirEstudante(new Estudante(nome, matricula++));
                else
                    System.out.println("Seleção inválida");
            }

            else if (opcaoPrograma == 2)
            {
                System.out.println("\nSelecione Casa\n");

                System.out.println("1 - Azul");
                System.out.println("2 - Amarelo");
                System.out.println("3 - Vermelho");
                System.out.println("4 - Verde\n");

                System.out.print("Selecão: ");
                opcaoCasa = intScanner.nextInt();

                if (anoL.getCasas(opcaoCasa).getEstudantes() != null) 
                {
                    System.out.println("\nSelecione estudante\n");

                    for (int i = 1; i <= anoL.getCasas(opcaoCasa).getEstudantes().size(); i++) 
                    {
                        System.out.printf("%d - %s\n", i, anoL.getCasas(opcaoCasa).getEstudantes().get(i-1).getNome());
                    }

                    System.out.print("\nSeleção: ");
                    opcaoEstudante = intScanner.nextInt();

                    System.out.print("\nDescreva tipo de comportamento: ");
                    comportamento = stringScanner.nextLine();

                    System.out.print("Defina pontuação: ");
                    pontos = intScanner.nextInt();

                    anoL.registrarComportamento
                    (
                        anoL.getCasas(opcaoCasa).getEstudantes().get(opcaoEstudante-1), 
                        new Comportamento(comportamento, pontos)
                    );
                }

                else
                {
                    System.out.println("\nCasa vazia\n");
                }
            }

            else if (opcaoPrograma == 3)
                anoL.encerrarAno();

            else 
            {
                System.out.println("Seleção inválida");
            }
        }

        intScanner.close();
        stringScanner.close();
    }
}
