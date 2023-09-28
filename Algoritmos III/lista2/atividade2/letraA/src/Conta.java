public class Conta {
    private String numeroConta, numeroAgencia;
    private double saldo;

    public Conta(String numeroConta, String numeroAgencia) {
        setNumeroAgencia(numeroAgencia);
        setNumeroConta(numeroConta);
        setSaldo(0);
    }

    private void setNumeroAgencia(String numeroAgencia) {this.numeroAgencia = numeroAgencia;}
    public String getNumeroAgencia() {return numeroAgencia;}

    private void setNumeroConta(String numeroConta) {this.numeroConta = numeroConta;}
    public String getNumeroConta() {return numeroConta;}

    private void setSaldo(double saldo) {this.saldo = saldo;}
    public double getSaldo() {return saldo;}

    public void fazDeposito(double deposito) {this.saldo = saldo + deposito;}
}
