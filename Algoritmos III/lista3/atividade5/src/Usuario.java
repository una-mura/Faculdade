public abstract class Usuario {
    private String nome;
    private tipoAcesso acesso;

    abstract boolean acessar(EspacoFisico espaco);

    public void setNome(String nome) {
        this.nome = nome;}
    public String getNome() {
        return nome;
    }

    public void setAcesso(tipoAcesso acesso) {
        this.acesso = acesso;
    }
    public tipoAcesso getAcesso() {
        return acesso;
    }
}
