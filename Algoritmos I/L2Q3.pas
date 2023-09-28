program Q3L2;
//Faça um algoritmo para ler um valor inteiro e dizer se ele é par ou ímpar.

var
  V1, C: integer;
begin
  write ('Insira um valor inteiro: ');
  readln (V1);

  C := V1 mod 2;
  
  if (C = 0) then
    write ('Número par.')
  else
    write ('Número ímpar.')

end.