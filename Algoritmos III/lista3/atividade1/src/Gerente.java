public class Gerente extends Funcionario {
    
    Gerente(String nome, double salario) {
        super(nome, salario);
        super.setBonus(getBonus() + 3000);
    }
}
