public class App 
{
    public static void main(String[] args) throws Exception 
    {
        Poligono[] poligonos = 
        {
            new Circulo(10),
            new Losango(16, 12),
            new Quadrado(5),
            new Retangulo(10, 5),
            new Triangulo(3, 4, 5)
        };

        for (Poligono poligono : poligonos) 
        {
            System.out.println(poligono.descreverForma() + "\n");    
        }
    }
}
