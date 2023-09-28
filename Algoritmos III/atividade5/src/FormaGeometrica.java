public abstract class FormaGeometrica {
    private double area, perimetro;

    FormaGeometrica() {

    }

    FormaGeometrica(double area, double perimetro) {
        setArea(area);
        setPerimetro(perimetro);
    }

    protected void setArea(double area) {this.area = area;}
    protected double getArea() {return area;}

    protected void setPerimetro(double perimetro) {this.perimetro = perimetro;}
    protected double getPerimetro() {return perimetro;}

    protected abstract String descreveForma();
}