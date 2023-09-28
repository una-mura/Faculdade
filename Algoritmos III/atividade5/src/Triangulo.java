public class Triangulo extends FormaGeometrica {
    private double ladoA, ladoB, ladoC;

    Triangulo(double ladoA, double ladoB, double ladoC) {

        setLadoA(ladoA);
        setLadoB(ladoB);
        setLadoC(ladoC);
        
        setArea(ladoA, ladoB, ladoC);
        setPerimetro(ladoA, ladoB, ladoC);
    }

    private void setLadoA(double ladoA) {this.ladoA = ladoA;}
    public double getLadoA() {return ladoA;}

    private void setLadoB(double ladoB) {this.ladoB = ladoB;}
    public double getLadoB() {return ladoB;}

    private void setLadoC(double ladoC) {this.ladoC = ladoC;}
    public double getLadoC() {return ladoC;}
    
    //Overloading
    private void setArea(double ladoA, double ladoB, double ladoC) {
        double s = (ladoA + ladoB + ladoC) / 2;
        double area = Math.sqrt(s * (s - ladoA) * (s - ladoB) * (s - ladoC));
        super.setArea(area);
    }

    //Overloading
    private void setPerimetro(double ladoA, double ladoB, double ladoC) {
        double perimetro = ladoA + ladoB + ladoC;
        super.setPerimetro(perimetro);
    }

    protected String descreveForma() {
        return "Eu sou um triângulo!\nMinha área: " + getArea() + "\nMeu perímetro: " + getPerimetro();
    }
}
