program algorImpar_3;
var
    num: integer;
begin
    repeat
        write ('Insira número ímpar: ');
        read (num);
    until ((num mod 2) = 0);  
end.