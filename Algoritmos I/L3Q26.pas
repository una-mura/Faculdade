program somatorio_26;
var
    t, x, xInit, numFat: integer;
    soma: real;
begin

    write ('Valor de X: ');
    readln (x);

    numFat := 1;
    soma := 0;

    for t := 1 to 40 do
    begin 
        numFat := (numFat * t);
        
        if (t = 1) then
            soma := soma + (x / numFat);
        else
        begin
            if ((t mod 2) <> 0) then
            begin
                if (t = 3) then
                begin
                    soma := soma - (sqr(x) / numFat);
                    x := sqr(x);
                    xInit := x;
                end
            
                else
                begin
                    soma := soma + (sqr(x) / numFat);
                    x := (x * xInit);
                end;
            end;
        end;
    end;

    writeln (soma:0:2);

end.