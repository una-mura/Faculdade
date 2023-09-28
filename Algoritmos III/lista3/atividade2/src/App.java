public class App {
    public static void main(String[] args) throws Exception {

        Triangulo fg01 = new Triangulo("Azul", "Triângulo");
        fg01.setAltura(10);
        fg01.setBase(5);
        fg01.calcularArea();
        System.out.println(fg01.getNome() + fg01.getCor() + fg01.getArea());

        Quadrado fg02 = new Quadrado("Vermelho", "Quadrado");
        fg02.inicializarQuadrilatero(6);
        System.out.println(fg02.getNome() + fg02.getCor() + fg02.getArea());

        Cubo fg03 = new Cubo("Rosa", "Cubo");
        fg03.inicializarPoliedro(5);
        System.out.println(fg03.getNome() + fg03.getCor() + fg03.getArea() + fg03.getVolume());
    }
}
