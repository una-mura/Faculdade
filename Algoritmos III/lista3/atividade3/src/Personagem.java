abstract class Personagem {
    private String nome, tipo;
    private int vida, forca;

    Personagem(String nome) {
        setNome(nome);
        setTipo(getClass().getName());
    }

    protected void setForca(int forca) {this.forca = forca;}
    protected int getForca() {return forca;}

    protected void setNome(String nome) {this.nome = nome;}
    protected String getNome() {return nome;}

    protected void setTipo(String tipo) {this.tipo = tipo;}
    protected String getTipo() {return tipo;}

    protected void setVida(int vida) {this.vida = vida;}
    protected int getVida() {return vida;}
}