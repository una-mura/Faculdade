public class Circulo extends FormaGeometrica {
    private double raio;

    Circulo(double raio) {

        setRaio(raio);
        setArea(raio);
        setPerimetro(raio);
    }

    private void setRaio(double raio) {this.raio = raio;}
    public double getRaio() {return raio;}

    @Override protected void setArea(double raio) {
        super.setArea(Math.PI * Math.pow(raio, 2));
    }

    @Override protected void setPerimetro(double raio) {
        super.setPerimetro(2 * Math.PI * raio);
    }

    protected String descreveForma() {
        return "Eu sou um círculo!\nMinha área: " + getArea() + "\nMeu perímetro: " + getPerimetro();
    }
}
