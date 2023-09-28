program Q1L2;
//Faça um algoritmo para ler dois valores do usuário e escrever o maior deles, independente dos valores serem iguais ou não.

var
  V1, V2: real;
begin
  write ('Insira o valor 1: ');
  readln (V1);
  write ('Insira o valor 2: ');
  readln (V2);
  
  if (V1 > V2) then
    write ('Maior valor: ', V1:0:2)
  else

    if (V2 > V1) then
      write ('Maior valor: ', V2:0:2)
    else

      if (V1 = V2) then
        write ('Maior valor: ', V1:0:2) 
  
end.