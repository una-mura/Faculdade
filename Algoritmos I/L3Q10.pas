program fibonacci_10;
var
    Fi1, Fi2, c, n, temp: integer;
begin
    read (n);
    c := 0;
    Fi1 := 1;
    Fi2 := 0;

    repeat
        write (Fi1, ', ');
        temp := Fi1;
        Fi1 := Fi1 + Fi2;
        Fi2 := temp;
        c := c + 1;
    until (c = n);        
end.