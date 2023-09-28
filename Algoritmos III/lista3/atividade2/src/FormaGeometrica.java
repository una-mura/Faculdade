abstract class FormaGeometrica {
    private String cor, nome;

    FormaGeometrica() {
        
    }

    FormaGeometrica(String cor, String nome) {
        setCor(cor);
        setNome(nome);
    }

    protected void setCor(String cor) {this.cor = cor;}
    protected String getCor() {return cor;}

    protected void setNome(String nome) {this.nome = nome;}
    protected String getNome() {return nome;}
}
