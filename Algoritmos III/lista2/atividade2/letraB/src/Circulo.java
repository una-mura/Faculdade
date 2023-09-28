public class Circulo {
    private double area, diametro, perimetro;

    public Circulo(double raio) {
        setArea(Math.PI * Math.pow(raio, 2));
        setDiametro(raio * 2);
        setPerimetro(2 * Math.PI * raio);
    }

    private void setArea(double area) {this.area = area;}
    public double getArea() {return area;}

    private void setDiametro(double diametro) {this.diametro = diametro;}
    public double getDiametro() {return diametro;}

    private void setPerimetro(double perimetro) {this.perimetro = perimetro;}
    public double getPerimetro() {return perimetro;}
}
