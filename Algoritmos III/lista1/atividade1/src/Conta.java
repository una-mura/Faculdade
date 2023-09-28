public class Conta {
    private double valorConta, valorExtra, maxExtra;
    private String numeroConta, numeroAgencia;

    //setters
    public void setValorConta(double valorConta) {
        this.valorConta = valorConta;
    }
    public void setMaxExtra(double valor) {
        this.maxExtra = valor;
        this.valorExtra = valor;
    }
    public void setValorExtra(double valor) {
        this.valorExtra = valor;
    }
    public void setNumeroConta(String numero) {
        this.numeroConta = numero;
    }
    public void setNumeroAgencia(String numero) {
        this.numeroAgencia = numero;
    }

    //getters
    public double getValorConta() {
        return valorConta;
    }
    public double getMaxExtra() {
        return maxExtra;
    }
    public double getValorExtra() {
        return valorExtra;
    }
    public String getNumeroConta() {
        return numeroConta;
    }
    public String getNumeroAgencia() {
        return numeroAgencia;
    }
}
