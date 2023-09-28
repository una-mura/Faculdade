public class VerificarSubstring {
    private String strA, strB;

    public void setStrA(String strA) {this.strA = strA;}
    public void setStrB(String strB) {this.strB = strB;}

    public int verificaSubstring() {
        int numRepeticoes = 0; 

        while (strB.contains(strA)) {
            numRepeticoes++;

            String comeco = strB.substring(0, strB.lastIndexOf(strA) + 1);
            String fim = strB.substring(strB.lastIndexOf(strA) + 2);

            strB = comeco + fim;
        }
        
        return numRepeticoes;
    }
}
