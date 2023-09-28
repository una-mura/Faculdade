program Q10L1;
//Construa um algoritmo para calcular as raízes de uma equação do segundo grau (ax2 + bx + c = 0), sendo que os valores de a, b e c são fornecidos pelo usuário
//(considere que a equação possui duas raízes reais).

var
  a, b, c, x1, x2, delta: real;
begin
  writeln ('Insira os valores de a, b e c');
  write ('Valor de a: ');
  readln (a);
  write ('Valor de b: ');
  readln (b);
  write ('Valor de c: ');
  readln (c);
  
  if (a = 0) then
    write ('A constante "a" não pode ser igual a zero!')
  else 
  begin
  delta := sqr(b) - 4*a*c;
  x1 := (-b + sqrt(delta))/2*a;
  x2 := (-b - sqrt(delta))/2*a;
  if (delta = 0) then
   write ('Não existem raízes reais')
  else
  writeln ('Raíz 1: ', x1:0:2);
  write ('Raíz 2: ', x2:0:2); 
  end;
end.