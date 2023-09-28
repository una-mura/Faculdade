program decrescente_12;
var
    num: integer;
begin
    num := 20;

    repeat
        writeln (num, '.');
        num := num - 1;
    until (num < 0);
end.