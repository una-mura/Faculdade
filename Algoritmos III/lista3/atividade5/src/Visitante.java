public class Visitante extends Usuario {
    
    Visitante(String nome) {
        setNome(nome);
    }

    boolean acessar(EspacoFisico espaco) {
        
        if (espaco.acesso == tipoAcesso.publico)
            return true;
        else
            return false;
    }
}
