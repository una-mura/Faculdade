public abstract class GiftCard {
    private String beneficiario, codigo, nome;
    private double valor;

    abstract void usoCartao();

    public void setBeneficiario(String beneficiario) {
        this.beneficiario = beneficiario;
    }
    public String getBeneficiario() {
        return beneficiario;
    }

    public void setCodigo(String codigo) {
        this.codigo = codigo;
    }
    public String getCodigo() {
        return codigo;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    public String getNome() {
        return nome;
    }

    public void setValor(double valor) {
        this.valor = valor;
    }
    public double getValor() {
        return valor;
    }
}
