abstract class FormaPlana extends FormaGeometrica {
    
    FormaPlana(String cor, String nome) {
        super(cor, nome);
    }

    private double area;

    protected void setArea(double area) {this.area = area;}
    protected double getArea() {return area;}

    void calcularArea(double base, double altura) {
        
    }
}
