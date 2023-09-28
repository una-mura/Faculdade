public class Quadrado extends Poligono 
{
    private double lado;

    public Quadrado(double lado)
    {
        this.lado = lado;

        setArea(lado * 2);
        setPerimetro(lado * 4);
    }

    public String descreverForma()
    {
        return "Eu sou um quadrado!\nMinha área: " + getArea() + "\nMeu perímetro: " + getPerimetro();
    }
}
