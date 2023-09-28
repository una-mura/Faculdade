program fatorial_14;

{Faça um programa que leia um valor N inteiro e positivo, calcule e mostre o valor
de S, conforme a fórmula a seguir: S = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!}

var
    fat, num, i: integer;
    soma: real;
begin

    write ('Insira um número: ');
    readln (num);
    soma := 1;
    fat := 1;

    for i := 1 to num do
    begin
        fat := fat * i;
        writeln (fat);
        soma := soma + (1 / fat);
    end;
    
    write ('O valor de S é ', soma:0:2);

end.