program Q6L2;
//Leia três valores e armazene-os nas variáveis A, B e C. Se todos forem positivos, calcule e imprima a área do trapézio que tem A e B por bases e C por altura.

var
    a, b, c, d: real;

begin
    writeln ('Insira o valor das bases e altura do trapézio');
    write ('Base 1: ' );
    readln (a);
    write ('Base 2: ');
    readln (b);
    write ('Altura: ');
    read (c);

    if (a > 0) and (b > 0) and (c > 0) then
    begin
        d := (((a+b)*c)/2);
        writeln ('Área do trapézio: ', d:0:2)
    end
    else
        writeln ('Dados inválidos!');
end.