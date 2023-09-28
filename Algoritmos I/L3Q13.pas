program tabuada_13;
var
    contador, x, numero, resultado: integer;
begin
    write ('Tabuada do: ');
    readln (x);
    write ('De 0 a: ');
    readln (numero);

    contador := 0;
    Resultado := x * contador;

    repeat
        writeln (x, ' x ', contador, ' = ', resultado)
        contador := contador + 1;
    until (contador > numero);
end.