abstract class Quadrilatero extends FormaPlana {
    
    Quadrilatero(String cor, String nome) {
        super(cor, nome);
    }

    private double ladoAB, ladoBC, ladoCD, ladoDA;

    protected void setLadoAB(double ladoAB) {this.ladoAB = ladoAB;}
    protected double getLadoAB() {return ladoAB;}

    protected void setLadoBC(double ladoBC) {this.ladoBC = ladoBC;}
    protected double getLadoBC() {return ladoBC;}

    protected void setLadoCD(double ladoCD) {this.ladoCD = ladoCD;}
    protected double getLadoCD() {return ladoCD;}

    protected void setLadoDA(double ladoDA) {this.ladoDA = ladoDA;}
    protected double getLadoDA() {return ladoDA;}

    void inicializarQuadrilatero() {
        
    }
}
