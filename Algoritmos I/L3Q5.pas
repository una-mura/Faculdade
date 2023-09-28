program chicoZe_5;
const
    chicoCresce = 0.02;
    zeCresce = 0.03;
var 
    chicoAlt, zeAlt: real;
    ano: integer;
begin
    chicoAlt := 1.5;
    zeAlt := 1.1;
    ano := 0;
    writeln ('Ano ', ano);
    write ('Chico: ', chicoAlt:0:2, ' | Zé: ', zeAlt:0:2)
    repeat
        writeln ('Ano ', ano);
        chicoAlt := chicoAlt + chicoCresce;
        zeAlt := zeAlt + zeCresce;
        ano := ano + 1;
        write ('Chico: ', chicoAlt:0:2, ' | Zé: ', zeAlt:0:2)
    until (zeAlt > chicoAlt);
end.