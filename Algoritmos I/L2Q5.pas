program Q5L2;
//Leia três valores e informe se podem corresponder aos lados de um triângulo. 
//Em caso afirmativo, verifique e informe se esse triângulo é: equilátero; isósceles; escaleno; retângulo.

var
  lado1, lado2, lado3: real;
begin
  writeln ('Informe os lados do triângulo.');
  write ('Lado 1: ');
  readln (lado1);
  write ('Lado 2: ');
  readln (lado2);
  write ('Lado 3: ');
  readln (lado3);
  
  if (lado3 >= (lado1 + lado2)) or (lado2 >= (lado1 + lado3)) or (lado1 >= (lado2 + lado3)) then
    write ('Impossível formar triângulo.')
  else
    begin
      //Triãngulo equilátero
      if (lado1 = lado2) and (lado2 = lado3) then
        write ('O triângulo é equilátero.')
      else

      //Trângulo isósceles
      if (lado1 = lado2) and (lado1 <> lado3) or (lado2 = lado3) and (lado2 <> lado1) or (lado3 = lado1) and (lado3 <> lado2) then
        write ('O triângulo é isósceles.')
      else

      //Triângulo retângulo
      if (lado1 > lado2) and (lado1 > lado3) or (lado2 > lado1) and (lado2 > lado3) or (lado3 > lado1) and (lado3 > lado2) then
        if (sqr(lado1) = (sqr(lado2) + sqr(lado3))) or (lado2 > lado1) and (lado2 > lado3) or (lado3 > lado1) and (lado3 > lado2) then
          write ('O triângulo é retângulo.')
      else

      //Trângulo escaleno
      write ('O triângulo é escaleno')
    end
    
end.