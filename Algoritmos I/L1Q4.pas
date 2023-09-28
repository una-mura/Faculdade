program Q4L1;
//Faça um algoritmo que leia dois valores, troque os valores das duas variáveis entre si e as escreva na saída.

var
  v1, v2, a: real;
begin
  write ('Valor 1: ');
  read (v1);
  write ('Valor 2: ');
  read (v2);
  a := (v1+v2);
  v1 := (a-v1);
  v2 := (a-v2);
  writeln ('Novo valor 1: ', v1:0:2);
  write ('Novo valor 2: ', v2:0:2); 
end.