import java.util.Scanner;

public class Escola
{
    public static void main(String[] args) 
    {
        Scanner intScanner = new Scanner(System.in);
        Scanner stringScanner = new Scanner(System.in);

        int i, opcaoCasa, opcaoEstudante, opcaoPrograma, matricula = 1;
        String nomeComportamento, nomeEstudante;
        
        System.out.print("Ano: ");
        AnoLetivo anoLetivo = new AnoLetivo(intScanner.nextInt());

        while(anoLetivo.getEncerrar() == false)
        {
            System.out.println("\nProcedimentos\n");

            System.out.println("1. Cadastrar estudante");
            System.out.println("2. Atribuir comportamento");
            System.out.println("3. Encerrar\n");

            System.out.print("Seleção: ");
            opcaoPrograma = intScanner.nextInt();

            switch (opcaoPrograma) {
                case 1:
                    System.out.print("\nNome do estudante: ");
                    nomeEstudante = stringScanner.nextLine();

                    System.out.println("\nCasas\n");

                    for (i = 0; i < anoLetivo.getCasas().length; i++) 
                    {
                        System.out.println(i + ". " + anoLetivo.getCasas()[i].getNome());    
                    }

                    System.out.print("\nCasa do estudante: ");
                    opcaoCasa = intScanner.nextInt();

                    if (opcaoCasa > anoLetivo.getCasas().length || opcaoCasa < 0) 
                    {
                        break;
                    }

                    anoLetivo.atribuirEstudante(new Estudante(nomeEstudante, matricula++), anoLetivo.getCasas()[opcaoCasa]);
                    break;

                case 2:
                    System.out.println("\nEstudantes\n");

                    for (i = 0; i < anoLetivo.getEstudantes().size(); i++) 
                    {
                        System.out.println(i + ". " + anoLetivo.getEstudantes().get(i).getNome());    
                    }

                    System.out.print("\nEstudante: ");
                    opcaoEstudante = intScanner.nextInt();

                    if (opcaoEstudante > anoLetivo.getEstudantes().size() || opcaoEstudante < 0) 
                    {
                        break;    
                    }

                    System.out.print("Tipo de comportamento: ");
                    nomeComportamento = stringScanner.nextLine();

                    System.out.print("Pontuação: ");
                    Comportamento comportamento = new Comportamento(nomeComportamento, intScanner.nextInt());

                    anoLetivo.registrarComportamento(anoLetivo.getEstudantes().get(opcaoEstudante), comportamento);
                    break;
            
                case 3:
                    anoLetivo.encerrarAno();
                    break;

                default:
                    System.out.println("Seleção inválida");
                    break;
            }
        }
        
        System.out.println("\nPontuação\n");

        for (Casa casa : anoLetivo.getCasas())
        {
            System.out.println(casa.getNome() + " - " + casa.getPontuacao() + " pontos");    
        }

        ordenar(anoLetivo.getCasas());
        anoLetivo.setVencedora(anoLetivo.getCasas()[0].getNome());

        System.out.println("\nRanking\n");

        for (Casa casa : anoLetivo.getCasas()) 
        {
            System.out.println(casa.getNome());    
        }

        System.out.println("\nVencedora: " + anoLetivo.getVencedora() + "\n");

        for (Estudante estudante : anoLetivo.getEstudantes()) 
        {
            if (estudante.getCasaEstudante() == anoLetivo.getVencedora()) 
            {
                System.out.println(estudante.getNome());    
            }    
        }

        intScanner.close();
        stringScanner.close();
    }

    public static void ordenar(Casa[] casas)
    {
        int tamanho = casas.length;
        boolean trocou;

        for (int i = 0; i < tamanho - 1; i++) 
        {
            trocou = false;
            
            for (int j = 0; j < tamanho - 1; j++) 
            {
                if (casas[j].getPontuacao() < casas[j + 1].getPontuacao()) 
                {
                    Casa temp = casas[j];
                    casas[j] = casas[j+1];
                    casas[j+1] = temp;

                    trocou = true;
                }
            }

            if (!trocou) 
            {
                break;    
            }
        }
    }
}