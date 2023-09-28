public class Circulo extends Poligono
{
    private double raio;

    public Circulo(double raio)
    {
        this.raio = raio;
        
        setArea(Math.PI * Math.pow(raio, 2));
        setPerimetro(2 * Math.PI * raio);
    }

    public String descreverForma()
    {
        return "Eu sou um círculo!\nMinha área: " + getArea() + "\nMeu perímetro: " + getPerimetro();
    }
}
