public class Retangulo extends Quadrilatero {

    Retangulo(String cor, String nome) {
        super(cor, nome);
    }

    void inicializarQuadrilatero(double base, double altura) {
        
        setLadoAB(base);
        setLadoBC(altura);
        setLadoCD(base);
        setLadoDA(altura);
        calcularArea(base, altura);
    }

    void calcularArea(double base, double altura) {
        setArea(base * altura);
    }
}
