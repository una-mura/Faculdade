public class Losango extends Poligono
{
    private double diagonalMaior, diagonalMenor;

    public Losango(double diagonalMaior, double diagonalMenor)
    {
        this.diagonalMaior = diagonalMaior;
        this.diagonalMenor = diagonalMenor;

        setArea((diagonalMaior * diagonalMenor) / 2);
        setPerimetro(4 * (Math.sqrt(Math.pow(diagonalMaior, 2) + Math.pow(diagonalMenor, 2)) / 2));
    }

    public String descreverForma()
    {
        return "Eu sou um losango!\nMinha área: " + getArea() + "\nMeu perímetro: " + getPerimetro();
    }
}
