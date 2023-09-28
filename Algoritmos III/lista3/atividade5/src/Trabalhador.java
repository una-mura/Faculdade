public class Trabalhador extends Usuario {

    Trabalhador(String nome) {
        setNome(nome);
    }

    boolean acessar(EspacoFisico espaco) {

        if (espaco.acesso == tipoAcesso.publico || espaco.acesso == tipoAcesso.privado)
            return true;
        else
            return false;
    }
}
