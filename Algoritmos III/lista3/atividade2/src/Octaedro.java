public class Octaedro extends Poliedro {

    Octaedro(String cor, String nome) {
        super(cor, nome);
    }

    void inicializarPoliedro(int valorAresta) {
        setValorAresta(valorAresta);
        calcularAreaVolume(valorAresta);
    }

    void calcularAreaVolume(int valorAresta) {
        setArea(2 * Math.sqrt(3) * Math.pow(valorAresta, 2));
        setVolume((Math.sqrt(2) / 3) * Math.pow(valorAresta, 3));
    }
    
}
