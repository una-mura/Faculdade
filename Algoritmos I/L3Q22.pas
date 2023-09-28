program energia_22;
var
    mes: array [1 .. 12] of integer;
    con, i, m, maiormesC, maiormesI, num, numConC, numConI, numConR: integer;
    kwhC, kwhCT, kwhI, kwhIT, kwhR, kwhRT, maiorC_co, maiorC_in, mediaC, mediaI: real;
begin
    
    write ('Número de consumidores: ');
    readln (num);
    writeln;
    
    m := 0;
    maiorC_co := 0;
    maiorC_in := 0;
    mediaC := 0;
    mediaI := 0;
    numConC := 0;
    numConI := 0;
    numConR := 0;    
    
    for m := 1 to 12 do
        mes[m] := m;
    
    for m := 1 to 12 do
    begin
        
        for i := 1 to num do
        begin
        
            writeln ('Mês ', mes[m]);
            writeln;
            writeln ('Tipo de Consumidor');
            writeln;
            writeln ('Residencial (1)');
            writeln ('Comercial (2)'); 
            writeln ('Industrial (3)');
            writeln;
            write ('Seleção: ');
            readln(con);

            if ((con <> 1) and (con <> 2) and (con <> 3)) then
            begin
                repeat
                    writeln ('Erro.');
                    writeln;
                    writeln ('Tipos de Consumidor');
                    writeln;
                    writeln ('Residencial (1)');
                    writeln ('Comercial (2)'); 
                    writeln ('Industrial (3)');
                    writeln;
                    write ('Seleção: ');
                    readln(con);
                until ((con = 1) or (con = 2) or (con = 3));
            end;

            case con of
                1:begin
                    numConR := numConR + 1;
                    write ('Consumo de energia elétrica (em kWh): ');
                    readln(kwhR);

                    if (mes[m] = 12) then
                        kwhRT := kwhR;

                    writeln;
                end;

                2:begin
                    numConC := numConC + 1;
                    write ('Consumo de energia elétrica (em kWh): ');
                    readln(kwhC);
                    
                    if (kwhC > maiorC_co) then
                    begin
                        maiorC_co := kwhC;
                        maiormesC := mes[m];
                    end;
                        
                    if (mes[m] = 12) then    
                        kwhCT := kwhC;

                    writeln; 
                end;

               3:begin
                    numConI := numConI + 1;
                    write ('Consumo de energia elétrica (em kWh): ');
                    readln(kwhI);

                    if (kwhI > maiorC_in) then
                    begin
                        maiorC_in := kwhI;
                        maiormesI := mes[m];
                    end;

                    if (mes[m] = 12) then
                        kwhIT := kwhIT + kwhI;
                    
                    writeln; 
                end; 
            end;

            mediaC := mediaC + kwhC;
            mediaI := mediaI + kwhI;

        end;
        
    end;

    mediaC := mediaC / 12;
    mediaI := mediaI / 12;

    writeln ('Número de consumidores');
    writeln;
    writeln ('Residencial: ', numConR);
    writeln ('Comercial: ', numConC);
    writeln ('Industrial: ', numConI);
    writeln;
    writeln ('Total de Consumo no último mês (kWh)');
    writeln;
    writeln ('Residencial: ', kwhRT:0:2);
    writeln ('Comercial: ', kwhCT:0:2);
    writeln ('Industrial: ', kwhIT:0:2);
    writeln;
    writeln ('Maior consumo com. foi ', maiorC_co:0:2, 'kWh e ocorreu em ', maiormesC);
    writeln ('Maior consumo ind. foi ', maiorC_in:0:2, 'kWh e ocorreu em ', maiormesI);
    writeln;
    writeln ('Média de consumo anual');
    writeln;
    writeln ('Comercial: ', mediaC:0:2);
    writeln ('Industrial: ', mediaI:0:2);

end.