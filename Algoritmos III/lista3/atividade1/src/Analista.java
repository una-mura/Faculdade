public class Analista extends Funcionario {
     
    Analista(String nome, double salario) {
        super(nome, salario);
        super.setBonus(salario * 0.2);
    }
}
