public class Circulo {
    private double area, perimetro, diametro;

    public void setCirculo(double raio) {    

        this.diametro = 2 * raio;
        this.area = Math.PI * Math.pow(raio, 2);
        this.perimetro = 2 * Math.PI * raio;
    }

    public double getDiametro() {return diametro;}
    public double getArea() {return area;}
    public double getPerimetro() {return perimetro;}
}
