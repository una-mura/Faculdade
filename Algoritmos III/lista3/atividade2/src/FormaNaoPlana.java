abstract class FormaNaoPlana extends FormaGeometrica {
    
    FormaNaoPlana(String cor, String nome) {
        super(cor, nome);
    }

    private double area, volume;

    protected void setArea(double area) {this.area = area;}
    protected double getArea() {return area;}

    protected void setVolume(double volume) {this.volume = volume;}
    protected double getVolume() {return volume;}

    void calcularAreaVolume() {
        
    } 
}
