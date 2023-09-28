public class Administrador extends Usuario {

    Administrador(String nome) {
        setAcesso(tipoAcesso.administrativo);
        setNome(nome);
    }
    
    boolean acessar(EspacoFisico espaco) {
        return true;
    }
}
