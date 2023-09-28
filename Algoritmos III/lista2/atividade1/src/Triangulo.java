public class Triangulo {
    private double ladoA, ladoB, ladoC, semiper;

    public Triangulo(double a, double b, double c) {
        setLadoA(a);
        setLadoB(b);
        setLadoC(c);
        setSemiper((a + b + c) / 2);
    }

    private void setLadoA(double ladoA) {this.ladoA = ladoA;}
    public double getLadoA() {return ladoA;}

    private void setLadoB(double ladoB) {this.ladoB = ladoB;}
    public double getLadoB() {return ladoB;}

    private void setLadoC(double ladoC) {this.ladoC = ladoC;}
    public double getLadoC() {return ladoC;}

    private void setSemiper(double semiper) {this.semiper = semiper;}
    public double getSemiper() {return semiper;}

    public double calculaArea() {
        double area = (semiper * (semiper - ladoA) * (semiper - ladoB) * (semiper - ladoC));
        return area;
    }
}
