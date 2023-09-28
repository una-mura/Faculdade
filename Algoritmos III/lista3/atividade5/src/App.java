public class App {
    public static void main(String[] args) throws Exception {

        EspacoFisico parqueAquatico = new EspacoPublico("Parque Aquático");
        EspacoFisico salaRefeitorio = new EspacoPublico("Refeitório do Parque");
        EspacoFisico salaFuncionarios = new EspacoPrivado("Departamento dos Funcionários");
        EspacoFisico salaDirecao = new EspacoAdministrativo("Direção Administrativa");

        parqueAquatico.subespacos.add(salaRefeitorio);
        parqueAquatico.subespacos.add(salaFuncionarios);
        parqueAquatico.subespacos.add(salaDirecao);

        Usuario banhista = new Visitante("Gabriel Soma");
        Usuario zelador = new Trabalhador("Thalita Lyra");
        Usuario salvavidas = new Trabalhador("Anna");
        Usuario gerente = new Administrador("Dwight Fairfield");

        Registro tabela = new Registro();

        //banhista
        if (banhista.acessar(parqueAquatico))
            tabela.acessos.add(banhista.getNome() + " em " + parqueAquatico.getNome());

        if (banhista.acessar(parqueAquatico.subespacos.get(0)))
            tabela.acessos.add(banhista.getNome() + " em " + parqueAquatico.subespacos.get(0).getNome());

        if (banhista.acessar(parqueAquatico.subespacos.get(1)))
            tabela.acessos.add(banhista.getNome() + " em " + parqueAquatico.subespacos.get(1).getNome());

        if (banhista.acessar(parqueAquatico.subespacos.get(2)))
            tabela.acessos.add(banhista.getNome() + " em " + parqueAquatico.subespacos.get(2).getNome());

        //zelador
        if (zelador.acessar(parqueAquatico))
            tabela.acessos.add(zelador.getNome() + " em " + parqueAquatico.getNome());

        if (zelador.acessar(parqueAquatico.subespacos.get(0)))
            tabela.acessos.add(zelador.getNome() + " em " + parqueAquatico.subespacos.get(0).getNome());

        if (zelador.acessar(parqueAquatico.subespacos.get(1)))
            tabela.acessos.add(zelador.getNome() + " em " + parqueAquatico.subespacos.get(1).getNome());

        if (zelador.acessar(parqueAquatico.subespacos.get(2)))
            tabela.acessos.add(zelador.getNome() + " em " + parqueAquatico.subespacos.get(2).getNome());

        //salvavidas
        if (salvavidas.acessar(parqueAquatico))
            tabela.acessos.add(salvavidas.getNome() + " em " + parqueAquatico.getNome());

        if (salvavidas.acessar(parqueAquatico.subespacos.get(0)))
            tabela.acessos.add(salvavidas.getNome() + " em " + parqueAquatico.subespacos.get(0).getNome());

        if (salvavidas.acessar(parqueAquatico.subespacos.get(1)))
            tabela.acessos.add(salvavidas.getNome() + " em " + parqueAquatico.subespacos.get(1).getNome());

        if (salvavidas.acessar(parqueAquatico.subespacos.get(2)))
            tabela.acessos.add(salvavidas.getNome() + " em " + parqueAquatico.subespacos.get(2).getNome());

        //gerente
        if (gerente.acessar(parqueAquatico))
            tabela.acessos.add(gerente.getNome() + " em " + parqueAquatico.getNome());

        if (gerente.acessar(parqueAquatico.subespacos.get(0)))
            tabela.acessos.add(gerente.getNome() + " em " + parqueAquatico.subespacos.get(0).getNome());

        if (gerente.acessar(parqueAquatico.subespacos.get(1)))
            tabela.acessos.add(gerente.getNome() + " em " + parqueAquatico.subespacos.get(1).getNome());

        if (gerente.acessar(parqueAquatico.subespacos.get(2)))
            tabela.acessos.add(gerente.getNome() + " em " + parqueAquatico.subespacos.get(2).getNome());

        for (int i = 0; i < tabela.acessos.size(); i++) {
            System.out.println(tabela.acessos.get(i));
        }
    }
}
