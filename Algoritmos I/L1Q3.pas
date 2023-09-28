program Q3L1;
//Escreva um algoritmo para calcular o valor de y como função de x, segundo a função y(x) = 3x + 2, num domínio real.

var
  y, x: real;
begin
  write ('Valor de X: ');
  readln (x);
  y := (3*x + 2);
  write ('Valor de y: ', y);
end.