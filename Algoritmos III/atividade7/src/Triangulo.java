public class Triangulo extends Poligono
{
    private double ladoA, ladoB, ladoC;

    public Triangulo(double ladoA, double ladoB, double ladoC)
    {
        this.ladoA = ladoA;
        this.ladoB = ladoB;
        this.ladoC = ladoC;

        final double s = (ladoA + ladoB + ladoC) / 2;
        setArea(Math.sqrt(s * (s - ladoA) * (s - ladoB) * (s - ladoC)));
        setPerimetro(ladoA + ladoB + ladoC);
    }
    
    public String descreverForma() {
        return "Eu sou um triângulo!\nMinha área: " + getArea() + "\nMeu perímetro: " + getPerimetro();
    }
}
