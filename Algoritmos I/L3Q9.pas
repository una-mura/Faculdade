program tresElevado_9;
var
    n, i, p, s: integer;
begin
    write ('Potência máxima: ');
    readln (n);
    i := 0;
    s := 0;

    repeat
        p := ((3 * 3)*i);

        if (p = 0) then
            p := 1;

        s := s + p;
        writeln ('3^', i, ' = ', p);
        i := i + 1;
    until (i = n);

    write ('Resultado da soma: ', s)
end.