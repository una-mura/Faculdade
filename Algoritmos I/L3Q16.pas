program PG_16;
var
    i, n, termo, somaTermo: integer;
begin

    write ('Quantidade de termos da PG a serem exibidos: ');
    read (n);
    termo := 1;
    somaTermo := 0;

    for i := 1 to n do
    begin
        write (termo, ';');
        somaTermo := somaTermo + termo;
        termo := termo * 2;
    end;

    writeln;
    write ('Soma dos termos da PG: ', somaTermo);

end.