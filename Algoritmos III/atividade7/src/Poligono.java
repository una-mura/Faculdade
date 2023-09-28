public abstract class Poligono 
{
    private double area, perimetro;

    public void setArea(double area) 
    {
        this.area = area;
    }
    public double getArea() 
    {
        return area;
    }

    public void setPerimetro(double perimetro) 
    {
        this.perimetro = perimetro;
    }
    public double getPerimetro() 
    {
        return perimetro;
    }

    public abstract String descreverForma();
}
