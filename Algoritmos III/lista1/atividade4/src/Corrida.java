public class Corrida {
    private Passageiro passageiro;
    private Motorista motorista;
    private String enderecoOrigem, enderecoChegada;

    public void setPassageiro(Passageiro passageiro) {this.passageiro = passageiro;}
    public void setMotorista(Motorista motorista) {this.motorista = motorista;}
    public void setEnderecoOrigem(String enderecoOrigem) {this.enderecoOrigem = enderecoOrigem;}
    public void setEnderecoChegada(String enderecoChegada) {this.enderecoChegada = enderecoChegada;}

    public Passageiro getPassageiro() {return passageiro;}
    public Motorista getMotorista() {return motorista;}
    public String getEnderecoOrigem() {return enderecoOrigem;}
    public String getEnderecoChegada() {return enderecoChegada;}

    public void simularCorrida() {

        String nomePassageiro = passageiro.getNome();
        String nomeMotorista = motorista.getNome();
        String modeloVeiculo = motorista.getModeloVeiculo();
        String corVeiculo = motorista.getCorVeiculo();
        String placaVeiculo = motorista.getPlacaVeiculo();

        System.out.println(nomePassageiro + ", " + nomeMotorista + " está se aproximando");
        System.out.println(nomeMotorista + " já chegou. A placa do " + modeloVeiculo + " " + corVeiculo + " é " + placaVeiculo);
        System.out.println("Indo de " + getEnderecoOrigem() + " até " + getEnderecoChegada());
        System.out.println("Você chegou ao seu destino!");
    }
}
