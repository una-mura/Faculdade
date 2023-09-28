public class EspacoPrivado extends EspacoFisico {
    
    EspacoPrivado(String nome) {
        setAcesso(tipoAcesso.privado);
        setNome(nome);
    }
}
