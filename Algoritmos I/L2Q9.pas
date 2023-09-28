program Q9L2;
//Considere uma loja que, ao fazer o cálculo do valor a ser pago em uma compra, dá um desconto de acordo com o número de unidades compradas, conforme a seguinte tabela:

//Número de unidades compradas    |   Desconto
//                                |   
//até 10 unidades                 |   ---
//de 11 a 20 unidades             |   10%
//de 21 a 50 unidades             |   20%
//acima de 50 unidades            |   30%

//Construa um programa para calcular o preço a pagar, sendo fornecidos o número de unidades vendidas e o preço unitário do produto comprado. 
//Após calcular o eventual desconto, o programa deve informar o preço a pagar e, se houve desconto, de quanto foi.

var
  precoUnidade, precoTotal, desconto: real;
  unidadesCompradas: integer;

begin
  
  write ('Unidades compradas: ');
  readln (unidadesCompradas);
  write ('Preço do produto: ');
  readln (precoUnidade);
  precoTotal := unidadesCompradas*precoUnidade;
  
  case unidadesCompradas of
  
    11 .. 20: Begin
                desconto := 0.1;
                precoTotal := precoTotal - (precoTotal*desconto);
              end;
    
    21 .. 50: Begin
                desconto := 0.2;
                precoTotal := precoTotal - (precoTotal*desconto);
              end;
              
    else
    
    if (unidadesCompradas > 50) then
      Begin
        desconto := 0.3;
        precoTotal := precoTotal - (precoTotal*desconto);
      end;
  
  end;
  
  desconto := desconto*100;
  writeln ('Valor a pagar: ', precoTotal:0:2);
  write ('Desconto: ', desconto:0:0, '%');
  
end.