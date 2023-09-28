program menorQue3000_4;
var
    num, r: real;
begin
    repeat
        write ('Número: ');
        read (num);
        r := num * 2;
        if (r >= 3000) then
            writeln ('Resultado: ', r:0:2)
        else
            write ('Fim')
    until (r >= 3000);
            
end.