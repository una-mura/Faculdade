program somaSerie_25;
var
    exponencial, t: integer;
    soma, numFat, numDois: real;
begin

    exponencial := 1;
    numFat := 1;
    numDois := 1;
    soma := 0;
    
    for t := 1 to 50 do
    begin

        numFat := (numFat * t);
        numDois := (numDois + exponencial);
        exponencial := (exponencial * 2) + 1;

        if ((t mod 2) = 0) then
            soma := (soma + (numFat / numDois))
        else
            soma := (soma - (numFat / numDois));

    end;

    write ('Soma: ', soma:0:2);

end.