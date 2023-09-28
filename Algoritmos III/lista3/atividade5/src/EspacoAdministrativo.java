public class EspacoAdministrativo extends EspacoFisico {
    
    EspacoAdministrativo(String nome) {
        setAcesso(tipoAcesso.administrativo);
        setNome(nome);
    }
}
