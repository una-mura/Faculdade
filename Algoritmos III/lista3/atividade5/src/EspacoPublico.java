public class EspacoPublico extends EspacoFisico {
    
    EspacoPublico(String nome) {
        setAcesso(tipoAcesso.publico);
        setNome(nome);
    }
}
