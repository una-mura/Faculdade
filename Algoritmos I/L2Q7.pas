program Q7L2;
//Escreva um programa que informe se existe estoque para atender a um pedido feito a uma fábrica. 
//O programa deve receber como entradas o número de itens em estoque e o número de itens a serem fornecidos, e deve informar o estoque
//atualizado ou fornecer uma mensagem indicando não haver itens suficientes em estoque para atender ao pedido.

var
  estoque, itensFornecidos, estoqueAtualizado: integer;
begin
  write ('Itens em estoque: ');
  readln (estoque);
  write ('Pedido solicitado. Insira itens a serem fornecidos: ');
  readln (itensFornecidos);

  if (itensFornecidos > estoque) then
    write ('Itens insuficientes em estoque!')
  else
    begin
      estoqueAtualizado := estoque - itensFornecidos;
      write ('Estoque atualizado: ', estoqueAtualizado)
    end;
  
end.