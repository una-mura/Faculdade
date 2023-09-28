program Q9L1;
//Faça um algoritmo para calcular o volume de uma esfera de raio R, em que R é um dado fornecido pelo usuário. 
//O volume de uma esfera é calculado por (v = 4 𝜋 R^3 / 3)

var
  r, v: real; 
begin
  write ('Insira o valor de R: ');
  readln (r);

  if (r <= 0) then
    write ('Valor inválido!')
  else
  begin
    v := (((4*Pi)*(r*r)*r)/3);
    write ('Volume da esfera: ', v:0:2)
  end;  
end.