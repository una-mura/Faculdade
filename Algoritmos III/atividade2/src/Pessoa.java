public class Pessoa {
    String nome;
    double massa;
    Planeta meuPlaneta = new Planeta();
    

    public void infoPessoa() {
        System.out.println(nome + " vive em " + meuPlaneta.nome + " e tem uma massa de " + massa + " kg");
    }
    
    public void infoPeso() {
        double fPeso = massa * meuPlaneta.g;
        System.out.printf("O peso de %s em %s é %.2f N\n", nome, meuPlaneta.nome, fPeso);
    }
}
