import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner stringScanner = new Scanner(System.in);
        
        VerificarSubstring stringSubstring = new VerificarSubstring();

        System.out.print("Informe substring a ser buscada: ");
        stringSubstring.setStrA(stringScanner.nextLine());

        System.out.print("Informe string a ser verificada: ");
        stringSubstring.setStrB(stringScanner.nextLine());

        int rep = stringSubstring.verificaSubstring();

        switch (rep) {
            case 0:
                System.out.println("Não há ocorrência da substring informada");    
                break;
        
            default:
                System.out.println("A substring ocorre " + rep + " vezes");
                break;
        }

        stringScanner.close();
    }
}
