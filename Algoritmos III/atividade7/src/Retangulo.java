public class Retangulo extends Poligono
{
    private double base, altura;

    public Retangulo(double base, double altura)
    {
        this.base = base;
        this.altura = altura;

        setArea(base * altura);
        setPerimetro((base + altura) * 2);
    }

    public String descreverForma()
    {
        return "Eu sou um retângulo!\nMinha área: " + getArea() + "\nMeu perímetro: " + getPerimetro();
    }
}
