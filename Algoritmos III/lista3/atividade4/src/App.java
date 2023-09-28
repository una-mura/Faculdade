public class App {
    public static void main(String[] args) throws Exception {
        double pagamento;
        String cliente;

        GiftCard giftcard00 = new SteamCard();
        giftcard00.setNome("Cartão Steam");
        giftcard00.setValor(100);
        giftcard00.setCodigo("123456");

        cliente = "Allison"; pagamento = 100;

        if (pagamento >= giftcard00.getValor())
            giftcard00.usoCartao();

        else
            System.out.println(cliente + ", pagamento fornecido é inferior ao valor da compra");
    }
}
