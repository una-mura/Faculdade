abstract class Poliedro extends FormaNaoPlana {
    
    Poliedro(String cor, String nome) {
        super(cor, nome);
    }

    private int valorAresta;

    protected void setValorAresta(int valorAresta) {this.valorAresta = valorAresta;}
    protected int getValorAresta() {return valorAresta;}

    void inicializarPoliedro() {

    }
}
