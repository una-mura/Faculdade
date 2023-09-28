program Q2L2;
//Faça um algoritmo para ler 3 valores e escrever o maior deles, independente de haver valores iguais.

var
  V1, V2, V3: real;
begin
  write ('Insira o valor 1: ');
  readln (V1);
  write ('Insira o valor 2: ');
  readln (V2);
  write ('Insira o valor 3: ');
  readln (V3);
  
  if (V1 > V2) and (V1 > V3) then
    write ('Maior valor: ', V1:0:2)
  else

    if (V2 > V1) and (V2 > V3) then
      write ('Maior valor: ', V2:0:2)
    else

      if (V1 = V2) and (V1 = V3) then
        write ('Maior valor: ', V1:0:2)
      else 

        if (V1 = V2) and (V1 > V3) then
          write ('Maior valor: ', V1:0:2)
        else

          if (V1 = V2) and (V3 > V1) then
            write ('Maior valor: ', V3:0:2)
          else 

            if (V1 = V3) and (V2 > V1) then
              write ('Maior valor: ', V2:0:2)
            else

              if (V1 = V3) and (V1 > V2) then
                write ('Maior valor: ', V1:0:2)
              else

                if (V2 = V3) and (V2 > V1) then
                  write ('Maior valor: ', V2:0:2)
                else 

                  if (V2 = V3) and (V1 > V2) then
                    write ('Maior valor: ', V1:0:2)
                  else

                    if (V3 > V1) and (V3 > V2) then
                      write ('Maior valor: ', V3:0:2)
  
end.