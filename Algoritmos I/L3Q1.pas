program Soma_1;
var 
    i, num, s: integer;
begin
    s := 0;
    writeln ('SOMATÓRIA');
    writeln ('Insira números');
    for i := 1 to 10 do
    begin  
        read (num);
        s := s + num;
    end;  
    write ('Resultado da soma = ', s);
end.