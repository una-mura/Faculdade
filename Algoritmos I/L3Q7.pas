program indeterminado_7;
var
    num, tag1, tag2, tag3: integer;
begin
    tag1 := 0;
    tag2 := 0;
    tag3 := 0;

    repeat
        read (num);
        case num of
            0 .. 25: tag1 := tag1 + 1;

            26 .. 50: tag2 := tag2 + 1;
        end;
        
        if (num > 50) then
            tag3 := tag3 + 1;
    until (num < 0);
    
    writeln ('Quantidade de números entre 0 e 25: ', tag1);
    writeln ('Quantidade de números entre 26 e 50: ', tag2);
    writeln ('Quantidade de números acima de 50: ', tag3);
end.