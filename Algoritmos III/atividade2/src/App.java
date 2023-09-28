public class App {
    public static void main(String[] args) throws Exception {

        Pessoa meuPessoa = new Pessoa();
        meuPessoa.nome = "Olivier";
        meuPessoa.massa = 70;
        meuPessoa.meuPlaneta.nome = "Terra";
        meuPessoa.meuPlaneta.g = 9.80665;
        meuPessoa.infoPessoa();
        meuPessoa.infoPeso();

        Planeta outroPlaneta = new Planeta();
        outroPlaneta.nome = "Marte";
        outroPlaneta.g = 3.72076;
        double outroPeso = meuPessoa.massa * outroPlaneta.g;

        System.out.printf("O peso aparente de %s em %s é %.2f N\n", meuPessoa.nome, outroPlaneta.nome, outroPeso);

    }
}
