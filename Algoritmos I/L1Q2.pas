program Q2L1;
//Escreva um algoritmo que, dados o valor da mercadoria e o valor pago, calcule e exiba o troco a ser devolvido.

var
  valorProduto, valorPago, troco: real;
begin
  write ('Insira o valor da mercadoria: R$ ');
  readln (valorProduto);
  write ('Valor de pagamento fornecido: R$ ');
  readln (valorPago);
  troco := (valorPago - valorProduto);

  if (troco < 0) then
    write ('Pagamento insuficiente!')
  else
    write ('Troco: R$ ', troco:0:2);  
end.