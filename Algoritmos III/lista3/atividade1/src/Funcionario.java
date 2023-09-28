public abstract class Funcionario {
    private double salario, bonus;
    private String nome;

    Funcionario() {

    }

    Funcionario(String nome, double salario) {
        setBonus(salario * 0.1);
        setNome(nome);
        setSalario(salario);
    }

    protected void setBonus(double bonus) {this.bonus = bonus;}
    protected double getBonus() {return bonus;}

    protected void setNome(String nome) {this.nome = nome;}
    protected String getNome() {return nome;}

    protected void setSalario(double salario) {this.salario = salario;}
    protected double getSalario() {return salario;}

    protected double calculaPagamento() {
        return salario + bonus;
    }
}