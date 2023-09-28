import java.util.ArrayList;

public class Escola
{
    public static void main(String[] args) 
    {
        ArrayList<Casa> casas = new ArrayList<>()
        {{
            new Casa("Amarela");
            new Casa("Azul");
            new Casa("Verde");
            new Casa("Vermelha");
        }};
    }
}