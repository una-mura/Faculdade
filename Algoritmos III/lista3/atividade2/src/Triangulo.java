public class Triangulo extends FormaPlana {
    private double base, altura;
    
    Triangulo(String cor, String nome) {
        super(cor, nome);
    }

    void calcularArea() {
        setArea((base * altura) / 2);
    }

    public void setAltura(double altura) {this.altura = altura;}
    public double getAltura() {return altura;}

    public void setBase(double base) {this.base = base;}
    public double getBase() {return base;}
}
