program idadeMedia_2;
var
    c, i, s: integer;
    m: real;
begin
    c := 0;
    s := 0;
    while (i >= 0) do
    begin
        write ('Insira idade: ');
        read (i);
        if (i >= 0) then
        begin
            s := s + i;
            c := c + 1;
        end; 
    end;
    writeln ('Soma: ', s);
    writeln ('Contador: ', c);
    m := s/c;
    write ('Média: ', m:0:2);
end.