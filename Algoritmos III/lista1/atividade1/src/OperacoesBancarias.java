public class OperacoesBancarias {
    private Conta myConta;

    public void criaConta(Conta conta) {
        myConta = conta;
    }

    public double verificarSaldo() {
        return myConta.getValorConta() + myConta.getValorExtra();
    }

    public void fazDeposito(double deposito) {

        if (myConta.getValorExtra() < myConta.getMaxExtra()) {

            if (myConta.getValorExtra() + deposito <= myConta.getMaxExtra()) {
                deposito = myConta.getValorExtra() + deposito;
                myConta.setValorExtra(deposito);
            }
            else {
                deposito = deposito - (deposito - myConta.getValorExtra());
                myConta.setValorConta(deposito);
                myConta.setValorExtra(myConta.getMaxExtra());
            }
        }
        else {
            myConta.setValorConta(myConta.getValorConta() + deposito);
        }
    }

    public void fazSaque(double saque) {

        if (myConta.getValorConta() >= saque) {
            myConta.setValorConta(myConta.getValorConta() - saque);
        }
        else {

            if (saque - myConta.getValorConta() <= myConta.getValorExtra()) {
                saque = saque - myConta.getValorConta();
                myConta.setValorConta(0);
                myConta.setValorExtra(myConta.getValorExtra() - saque);
            }
            else {
                System.out.println("Impossível sacar quantia");
            }
        }
    }
}
