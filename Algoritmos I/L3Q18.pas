program temperaturas_18;
var
    c, f, k: real;
   opt: integer; 
begin
    
    writeln ('Conversão de Temperatura Online');
    writeln;
    writeln ('1. Celsius para Fahrenheit');
    writeln ('2. Fahrenheit para Celsius');
    writeln ('3. Celsius para Kelvin');
    writeln ('4. Kelvin para Celsius');
    writeln ('5. Encerrar programa');
    writeln;
    write ('Informe a opção desejada: ');
    readln (opt);

    while (opt <> 5) do
    begin

        case opt of
            1: begin
                
                write ('Temperatura em Celsius: ');
                readln (c);
                f := (c * 1.8 + 32);
                writeln ('Temperatura em Fahrenheit: ', f:0:2);
                writeln;

            end;

            2: begin

                write ('Temperatura em Fahrenheit: ');
                readln (f);
                c := ((f - 32) / 1.8);
                writeln ('Temperatura em Celsius: ', c:0:2);
                writeln;

            end;

            3: begin

                write ('Temperatura em Celsius: ');
                readln (c);
                k := (c + 273.15);
                writeln ('Temperatura em Kelvin: ', k:0:2);
                writeln;

            end;

            4: begin

                write ('Temperatura em Kelvin: ');
                readln (k);
                c := (k - 273.15);
                writeln ('Temperatura em Celsius: ', c:0:2);
                writeln;

            end;

            else
            begin
            
                writeln ('Opção Inválida!');
                writeln;
                
            end;
        end;

        writeln ('Conversão de Temperatura Online');
        writeln;
        writeln ('1. Celsius para Fahrenheit');
        writeln ('2. Fahrenheit para Celsius');
        writeln ('3. Celsius para Kelvin');
        writeln ('4. Kelvin para Celsius');
        writeln ('5. Encerrar programa');
        writeln;
        write ('Informe a opção desejada: ');
        readln (opt);

    end;
    
    if opt = 5 then
        write ('Programa encerrado.');

end.