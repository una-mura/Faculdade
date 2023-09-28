program sorveteria_19_20;
const
    pA = 3.50;
    pB = 4.00;
    pC = 5.00;
    pD = 6.00;
    pE = 8.50;
var
    itensVendidos: array [1 .. 5] of integer;
    totalPago: array [1 .. 5] of real;
    subtotal, totalGanho, mediaValor: real;
    i, pedido, qtd: integer;
    codigo, confirma, reset: char;
begin

    for i := 1 to 5 do
        begin
            itensVendidos[i] := 0;
            totalPago[i] := 0;
        end;

    totalGanho := 0;
    pedido := 0;
    mediavalor := 0;

    repeat
    
        subtotal := 0;

        repeat
        
            {menu da sorveteria}
            writeln ('Gelato Alla Crema');
            writeln;
            writeln ('Menu');
            writeln;
            writeln ('Código |      Produto      | Preço (R$)');
            writeln;
            writeln (' A     | Refrigerante      | ', pA:0:2);
            writeln (' B     | Casquinha Simples | ', pB:0:2);
            writeln (' C     | Casquinha Dupla   | ', pC:0:2);
            writeln (' D     | Sundae            | ', pD:0:2);
            writeln (' E     | Banana Split      | ', pE:0:2);
            writeln;

            write ('Informe o código do produto desejado: ');
            readln (codigo);

            write ('Informe quantidade de unidades a serem adquiridas: ');
            readln (qtd);

            case codigo of
                'a': begin
                    subtotal := subtotal + (pA * qtd); {valor da compra individual}
                    itensVendidos[1] := itensVendidos[1] + 1; {acúmulo dos itens vendidos no dia}
                    totalPago[1] := totalPago[1] + (pA * qtd); {total de dinheiro que o produto rendeu}
                    totalGanho := totalGanho + totalPago[1]; {acúmulo dos ganhos gerais}
                end;

                'b': begin
                    subtotal := subtotal + (pB * qtd);
                    itensVendidos[2] := itensVendidos[2] + 1;
                    totalPago[2] := totalPago[2] + (pB * qtd);
                    totalGanho := totalGanho + totalPago[2];
                end;

                'c': begin
                    subtotal := subtotal + (pC * qtd);
                    itensVendidos [3] := itensVendidos[3] + 1;
                    totalPago[3] := totalPago[3] + (pC * qtd);
                    totalGanho := totalGanho + totalPago[3];
                end;

                'd': begin
                    subtotal := subtotal + (pD * qtd);
                    itensVendidos [4] := itensVendidos[4] + 1;
                    totalPago[4] := totalPago[4] + (pD * qtd);
                    totalGanho := totalGanho + totalPago[4];
                end;

                'e': begin
                    subtotal := subtotal + (pE * qtd);
                    itensVendidos [5] := itensVendidos[5] + 1;
                    totalPago[5] := totalPago[5] + (pE * qtd);
                    totalGanho := totalGanho + totalPago[5];
                end;

                else
                    write ('Erro.');
            end;

            writeln;
            write ('Deseja mais algo? (S/N): ');
            readln (confirma);

            {checagem pra sim ou não}
            if (confirma <> 's') and (confirma <> 'n') then
            begin
                repeat
                    writeln ('Confirmação inválida!');
                    writeln;
                    write ('Deseja mais algo? (S/N): ');
                    readln (confirma);
                until ((confirma = 's') or (confirma = 'n'));
            end;

        until (confirma = 'n');

        pedido := pedido + 1; {número de pedidos}

        writeln;
        writeln ('Subtotal: ', subtotal:0:2);
        mediaValor := mediaValor + subtotal;
        writeln;
        write ('Nova venda? (S/N): ');
        readln (reset);

        {checagagem de sim ou não}
        if (reset <> 's') and (reset <> 'n') then
            begin
                repeat
                    writeln ('Confirmação inválida!');
                    writeln;
                    write ('Nova venda:? (S/N): ');
                    readln (reset);
                until ((reset = 's') or (reset = 'n'));
            end;

    until (reset = 'n');

    writeln ('Tabela de Vendas');
    writeln;
    writeln ('Código |      Produto      | Vendidos | Total Pago (R$) ');
    writeln;
    writeln (' A     | Refrigerante      | ', itensVendidos[1], '        | ', totalPago[1]:0:2);
    writeln (' B     | Casquinha Simples | ', itensVendidos[2], '        | ', totalPago[2]:0:2);
    writeln (' C     | Casquinha Dupla   | ', itensVendidos[3], '        | ', totalPago[3]:0:2);
    writeln (' D     | Sundae            | ', itensVendidos[4], '        | ', totalPago[4]:0:2);
    writeln (' E     | Banana Split      | ', itensVendidos[5], '        | ', totalPago[5]:0:2);
    writeln;
    writeln ('Total arrecadado: R$', totalGanho:0:2);
    writeln ('Média de valor pago: R$', (mediaValor / pedido):0:2);        

end.