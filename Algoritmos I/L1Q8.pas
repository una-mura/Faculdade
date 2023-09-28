program Q8L1;
//Escreva um algoritmo que leia as dimensões de um retângulo (base e altura), calcule e escreve a área do retângulo.

var
  b, h, a: real;
begin
  writeln ('Insira as dimensões do retângulo');
  write ('Base: ');
  readln (b);
  write ('Altura: ');
  readln (h);

  if (b <= 0) or (h <= 0) then
    writeln ('Valores inválidos!')
  else
  begin
    a := (b*h);
    writeln ('A área do retângulo é igual a ', a)
  end;
end.