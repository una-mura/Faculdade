program perfeito_17;
var
    num, i, j, soma: integer;
begin

    write ('Números perfeitos até: ');
    readln (num); 

    for i := 1 to num do
    begin 
      
        soma := 0;

        for j := 1 to (i - 1) do
            if ((i mod j) = 0) then
                soma := soma + j;

        if (soma = i) then
            writeln (i, ' é perfeito.')

    end;    

end.