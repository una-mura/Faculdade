program pi_24;
var 
    num, pi: real;
begin
    
    pi := 4;
    num := 3;

    repeat
        pi := pi - (4 / num);
        num := num + 2;
        pi := pi + (4 / num);
        num := num + 2;
    until ((pi <= 3.1416) and (pi >= 3.1414));    
    
    writeln (pi:0:4);

end.