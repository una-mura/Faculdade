program temp_8;
var
    c, f: real;
    conf: char;
begin
    write ('Temperatura em Celsius: ');
    readln (c);
    f := (((9 * c) / 5) + 32);

    writeln ('Temperatura em Fahrenheit: ', f:0:2);
    write ('Deseja repetir o processo? (s ou n): ');
    readln (conf);
    if (conf = 's') then
        begin
            repeat
                write ('Temperatura em Celsius: ');
                readln (c);

                f := (((9 * c) / 5) + 32);
                writeln ('Temperatura em Fahrenheit: ', f:0:2);
                
                write ('Deseja repetir o processo? (s ou n): ');
                readln (conf);

                if ((conf <> 's') and (conf <> 'n')) then
                    begin
                        repeat
                        writeln ('Confirmação inválida.');
                        write ('Deseja repetir o processo? (s ou n): ');
                        readln (conf);
                        until ((conf = 's') or (conf = 'n'));
                    end; 

            until (conf = 'n');

            if (conf = 'n') then
                write ('Fim.');      
        end
    else
    
    if (conf = 'n') then
       
    write ('Fim.');  

end.