public class Tetraedro extends Poliedro {

    Tetraedro(String cor, String nome) {
        super(cor, nome);
    }

    void inicializarPoliedro(int valorAresta) {
        setValorAresta(valorAresta);
        calcularAreaVolume(valorAresta);
    }

    void calcularAreaVolume(int valorAresta) {
        setArea(Math.pow(valorAresta, 2) * Math.sqrt(3));
        setVolume(Math.pow(valorAresta, 3 / 6 * Math.sqrt(2)));
    }
}
