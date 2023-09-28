package atividade1;

public class Main {
    public static void main(String[] args) {
        Elemento eA = new Elemento();
        eA.nome = "Irídio";
        eA.simbolo = "Ir";
        eA.num_atomico = 77;
        eA.grupo = 9;

        Elemento eB = new Elemento();
        eB.nome = "Polônio";
        eB.simbolo = "Po";
        eB.num_atomico = 84;
        eB.grupo = 16;

        if (eA.ehRadioativo(eA.num_atomico)) System.out.println(eA.nome + " é um elemento radioativo");
        else System.out.println(eA.nome + " não é um elemento radioativo");

        if (eB.ehRadioativo(eB.num_atomico)) System.out.println(eB.nome + " é um elemento radioativo");
        else System.out.println(eB.nome + " não é um elemento radioativo");
    }
}