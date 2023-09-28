program audiencia_23;
var
    canal, audiGlobo, audiRecord, audiSBT, audiBand, entrevistados: integer;
    porcBand, porcGlobo, porcRecord, porcSBT: real;
begin
    
    writeln ('Pesquisa de Audiência');
    writeln;

    entrevistados := 0;
    audiBand := 0;
    audiGlobo := 0;
    audiRecord := 0;
    audiSBT := 0;

    repeat
        write ('Canal: ');
        readln (canal);

        case canal of
            4: audiGlobo := audiGlobo + 1;

            5: audiSBT := audiSBT + 1;

            7: audiRecord := audiRecord + 1;

            13: audiBand := audiBand + 1;

            0: write ('Fim');
        end;

        entrevistados := entrevistados + 1;
    until (canal = 0);

    porcGlobo := (audiGlobo * 100) / entrevistados;
    porcSBT := (audiSBT * 100) / entrevistados;
    porcRecord := (audiRecord * 100) / entrevistados;
    porcBand := (audiBand * 100) / entrevistados;

    writeln ('Emissora: Globo');
    writeln ('Canal: 4 | Porcentagem: ', porcGlobo:0:2, '%');
    writeln;
    writeln ('Emissora: SBT');
    writeln ('Canal: 5 | Porcentagem: ', porcSBT:0:2, '%');
    writeln;
    writeln ('Emissora: Record');
    writeln ('Canal: 7 | Porcentagem: ', porcRecord:0:2, '%');
    writeln;
    writeln ('Emissora: Band');
    writeln ('Canal: 13 | Porcentagem: ', porcBand:0:2, '%');
    writeln;

end.