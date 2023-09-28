package atividade1;

public class Elemento {
    String nome, simbolo;
    int num_atomico, grupo;

    boolean ehRadioativo(int num_atomico) {
        return num_atomico >= 84;
    }
}
