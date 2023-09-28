public class Quadrado extends Quadrilatero {

    Quadrado(String cor, String nome) {
        super(cor, nome);
    }

    void inicializarQuadrilatero(double lado) {
        
        setLadoAB(lado);
        setLadoBC(lado);
        setLadoCD(lado);
        setLadoDA(lado);
        calcularArea(lado);
    }

    void calcularArea(double lado) {
        setArea(lado*lado);
    }
}
