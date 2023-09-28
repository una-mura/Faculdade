public class Alcoolica extends Bebida {
    private String tipo;
    
    public Alcoolica(double preco, int volume, String tipo) {
        super(preco, volume);
        setTipo(tipo);
    }

    public void setTipo(String tipo) {this.tipo = tipo;}
    public String getTipo() {return tipo;}
}
