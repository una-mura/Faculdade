import java.util.ArrayList;

enum tipoAcesso {publico, privado, administrativo}

public abstract class EspacoFisico {
    ArrayList<EspacoFisico> subespacos = new ArrayList<>();
    tipoAcesso acesso;
    String nome;

    public void setAcesso(tipoAcesso acesso) {
        this.acesso = acesso;
    }
    public tipoAcesso getAcesso() {
        return acesso;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    public String getNome() {
        return nome;
    }
}
