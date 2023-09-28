public class Cubo extends Poliedro {

    Cubo(String cor, String nome) {
        super(cor, nome);
    }

    void inicializarPoliedro(int valorAresta) {
        setValorAresta(valorAresta);
        calcularAreaVolume(valorAresta);
    }

    void calcularAreaVolume(int valorAresta) {
        setArea(Math.pow(valorAresta, 2) * 6);
        setVolume(Math.pow(valorAresta, 3));
    }
}
