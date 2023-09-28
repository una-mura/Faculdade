public class App 
{
    public static void main(String[] args) 
    {
        Planta[] plantas = new Planta[]
        {
            new Aconito(),
            new Cicuta(),
            new OraProNobis(),
            new Picao()
        };

        for (Planta planta : plantas) 
        {
            if (planta.ehComestivel()) 
            {
                System.out.println(planta.getNome() + " é comestível");
            }

            else
            {
                System.out.println(planta.getNome() + " é venenosa");
            }
        }
    }
}
