program Q8L2;
//Uma loja fornece 5% de desconto para funcionários e 10% de desconto para clientes especiais. 
//Construa um programa que calcule o valor total a ser pago por uma pessoa em uma compra. 
//O programa deve ler o valor total da compra efetuada e um código que identifique se o comprador é um cliente comum ou um dos dois tipos de
//clientes que recebem desconto. No final, o programa deve informar o valor a pagar e o desconto que foi dado, se for o caso.

var
  stock, fornecidos, attStock: integer;
begin
  write ('Itens em estoque: ');
  readln (stock);
  write ('Itens a serem fornecidos: ');
  readln (fornecidos);
  
  if (fornecidos > stock) then
    write ('Não há itens suficientes em estoque!')
  else
    begin
      attStock := stock - fornecidos;
      write ('Estoque atualizado: ', attStock)
    end;
  
end.