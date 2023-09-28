import java.util.HashMap;
import java.util.InputMismatchException;
import java.util.Scanner;

public class App 
{
    public static void main(String[] args) throws Exception 
    {
        HashMap <Integer, Cogumelo> cogumelos = new HashMap<>() 
        {{
            put(1, new Comum(0));
            put(2, new Helice(0));
            put(3, new Mega(0));
            put(4, new Mini(0));
            put(5, new OneUp(0));
            put(6, new Super(0));
            put(7, new Venenoso(0));
        }};

        HashMap <Integer, Agente> agentes = new HashMap<>();

        Scanner doubleScanner = new Scanner (System.in);
        Scanner intScanner = new Scanner (System.in);
        Scanner stringScanner = new Scanner (System.in);

        Simulador testeCogumelos = new Simulador();
        int contAgente, opcaoAgente, opcaoPrograma, opcaoCogumelo, quantidadeCogumelo;
        String nomeAgente; double alturaAgente;

        contAgente = 1;

        System.out.println("\nBem vinde ao simulador de testes de cogumelos!");

        while (testeCogumelos.getLigado()) 
        {
            System.out.println("\nOpções:\n");

            System.out.println("Cadastrar agente (1)");
            System.out.println("Acrescentar cogumelos (2)");
            System.out.println("Testar efeito de cogumelo em agente (3)");
            System.out.println("Desligar simulador (0)");

            System.out.print("\nOperação desejada: "); 
            opcaoPrograma = intScanner.nextInt();

            if (opcaoPrograma == 1) 
            {
                System.out.print("\nNome do agente: ");
                nomeAgente = stringScanner.nextLine();

                System.out.print("Altura do agente: ");
                
                try 
                {
                    alturaAgente = doubleScanner.nextDouble();
                    agentes.put(contAgente++, new Agente(nomeAgente, alturaAgente));                    
                } 
                catch (InputMismatchException e) 
                {
                    System.out.println("Input inválido");
                }
            }

            else if (opcaoPrograma == 2)
            {
                System.out.println("\nCogumelos: ");

                for (int i = 1; i <= cogumelos.size(); i++) 
                {
                    System.out.println(cogumelos.get(i).getNome() + " (" + cogumelos.get(i).getQuantidade() + ")");                    
                }

                System.out.print("\nSelecione cogumelo por ordem numérica (partindo do 1): ");
                opcaoCogumelo = intScanner.nextInt();

                System.out.print("Quantidade a ser adicionada: ");
                quantidadeCogumelo = intScanner.nextInt();

                if (opcaoCogumelo >= 0 && opcaoCogumelo < cogumelos.size())
                    cogumelos.get(opcaoCogumelo).aumentarQuantidade(quantidadeCogumelo);
                else
                    System.out.println("\nValor inválido");
            }

            else if (opcaoPrograma == 3)
            {
                System.out.println("\nAgentes: \n");

                for (int i = 1; i <= agentes.size(); i++) 
                {
                    System.out.println(agentes.get(i).getNome());                        
                }

                System.out.print("\nSelecione agente por ordem numérica (partindo do 1): ");
                opcaoAgente = intScanner.nextInt();

                System.out.println("\nCogumelos:\n");

                for (int i = 1; i <= cogumelos.size(); i++) 
                {
                    System.out.println(cogumelos.get(i).getNome());
                }

                System.out.print("\nSelecione cogumelo por ordem numérica (partindo do 1): ");
                opcaoCogumelo = intScanner.nextInt();

                if (opcaoCogumelo > 0 && opcaoCogumelo <= cogumelos.size() && opcaoAgente > 0 && opcaoAgente <= agentes.size())
                    testeCogumelos.testarCogumelo(agentes.get(opcaoAgente), cogumelos.get(opcaoCogumelo));
                else
                    System.out.println("\nValores inválidos");
            }
            else if (opcaoPrograma == 0)
            {
                testeCogumelos.setLigado(false);
            }
            else
            {
                System.out.println("\nOpção inválida");
            }
        }

        doubleScanner.close();
        intScanner.close();
        stringScanner.close();
    }
}
