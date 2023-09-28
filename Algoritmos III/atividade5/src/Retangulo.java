public class Retangulo extends FormaGeometrica {
    private double base, altura;

    Retangulo(double base, double altura) {

        super(base * altura, (base + altura) * 2);
        setAltura(altura);
        setBase(base);
    }

    private void setAltura(double altura) {this.altura = altura;}
    public double getAltura() {return altura;}

    private void setBase(double base) {this.base = base;}
    public double getBase() {return base;}

    protected String descreveForma() {
        return "Eu sou um retângulo!\nMinha área: " + getArea() + "\nMeu perímetro: " + getPerimetro();
    }
}