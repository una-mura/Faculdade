import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner stringScanner = new Scanner(System.in);
        
        Passageiro meuPassageiro = new Passageiro();
        System.out.print("Nome do Passageiro: ");
        meuPassageiro.setNome(stringScanner.nextLine());
        meuPassageiro.setEnderecoAtual("Rua Dois, Bairro Pindamonhangaba");
        meuPassageiro.setEnderecoDestino("Rua das Flores, Bairro Itaquaquecetuba");

        Motorista meuMotorista = new Motorista();
        System.out.print("Nome do Motorista: ");
        meuMotorista.setNome(stringScanner.nextLine());
        System.out.print("Modelo do Veículo: ");
        meuMotorista.setModeloVeiculo(stringScanner.nextLine());
        System.out.print("Cor do Veículo: ");
        meuMotorista.setCorVeiculo(stringScanner.nextLine());
        System.out.print("Placa do Veículo: ");
        meuMotorista.setPlacaVeiculo(stringScanner.nextLine());

        Corrida simulaCorrida = new Corrida();
        simulaCorrida.setPassageiro(meuPassageiro);
        simulaCorrida.setMotorista(meuMotorista);
        simulaCorrida.setEnderecoOrigem(meuPassageiro.getEnderecoAtual());
        simulaCorrida.setEnderecoChegada(meuPassageiro.getEnderecoDestino());

        simulaCorrida.simularCorrida();
    
        stringScanner.close();
    }
}
