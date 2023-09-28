public class Bebida {
    private double preco;
    private int volume;

    public Bebida(double preco, int volume) {
        setPreco(preco);
        setVolume(volume);
    }

    public void setPreco(double preco) {this.preco = preco;}
    public double getPreco() {return preco;}

    public void setVolume(int volume) {this.volume = volume;}
    public int getVolume() {return volume;}
}
