import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner stringScanner = new Scanner(System.in);
        Scanner doubleScanner = new Scanner(System.in);

        //definição dos atributos da conta
        Conta myConta = new Conta();
        System.out.print("ID da conta: ");
        myConta.setNumeroConta(stringScanner.nextLine());

        System.out.print("ID da agência: ");
        myConta.setNumeroAgencia(stringScanner.nextLine());

        System.out.print("Saldo inicial: R$");
        myConta.setValorConta(doubleScanner.nextDouble());

        System.out.print("Crédito inicial: R$");
        myConta.setMaxExtra(doubleScanner.nextDouble());

        //início das operações bancárias
        OperacoesBancarias operacoes = new OperacoesBancarias();
        operacoes.criaConta(myConta);

        System.out.println("\nOperações Bancárias\n");

        System.out.print("Valor de depósito: R$");
        operacoes.fazDeposito(doubleScanner.nextDouble());

        System.out.print("Valor de Saque: R$");
        operacoes.fazSaque(doubleScanner.nextDouble());

        System.out.print("Saldo: R$" + operacoes.verificarSaldo());

        stringScanner.close();
        doubleScanner.close();
    }
}
