public class Refrigerante extends Bebida {
    private String sabor;

    public Refrigerante(double preco, int volume, String sabor) {
        super(preco, volume);
        setSabor(sabor);
    }

    public void setSabor(String sabor) {this.sabor = sabor;}
    public String getSabor() {return sabor;}
}
