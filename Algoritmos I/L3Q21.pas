program entrevista_21;
var
    curso: array [1 .. 10] of integer;
    idade: array [1 .. 10] of integer;
    al, admAlunos, comAlunos, engAlunos, adm20_25, com20_25, eng20_25: integer;
    mediaAdm, mediaCom, mediaEng, mediaMenor: real;
begin
    admAlunos := 0;
    comAlunos := 0;
    engAlunos := 0;
    eng20_25 := 0;
    com20_25 := 0;
    adm20_25 := 0;
    mediaEng := 0;
    mediaCom := 0;
    mediaAdm := 0;

    for al := 1 to 10 do
    begin
        writeln ('Entrevista Etária');
        writeln;
        writeln ('Qual curso você frequenta?');
        writeln;
        writeln ('1. Engenharia');
        writeln ('2. Computação');
        writeln ('3. Administração');
        writeln;
        write ('Resposta: ');
        readln(curso[al]);

        if ((curso[al] <> 1) and (curso[al] <> 2) and (curso[al] <> 3)) then
            begin
                repeat
                    writeln;
                    writeln ('Resposta inválida.');
                    writeln;
                    writeln ('Qual curso você frequenta?');
                    writeln;
                    writeln ('1. Engenharia');
                    writeln ('2. Computação');
                    writeln ('3. Administração');
                    writeln;
                    write ('Resposta: ');
                    readln(curso[al]);
                until ((curso[al] = 1) or (curso[al] = 2) or (curso[al] = 3));
            end;

        writeln;
        writeln ('Qual é sua idade?');
        writeln;
        write ('Resposta: ');
        readln(idade[al]);
        writeln;
        writeln ('------------------------------');
        writeln;

        case curso[al] of
            1: begin
                engAlunos := engAlunos + 1;
                mediaEng := mediaEng + idade[al];

                case idade[al] of
                    20 .. 25: eng20_25 := eng20_25 + 1;
                end;
            end;

            2: begin
                comAlunos := comAlunos + 1;
                mediaCom := mediaCom + idade[al];

                case idade[al] of
                    20 .. 25: com20_25 := com20_25 + 1;
                end;
            end;

            3: begin
                admAlunos := admAlunos + 1;
                mediaAdm := mediaAdm + idade[al];

                case idade[al] of
                    20 .. 25: adm20_25 := adm20_25 + 1;
                end;
            end;
        end;
    end;
    

    if (mediaAdm < mediaCom) then
        if (mediaAdm < mediaEng)  then
            mediaMenor := mediaAdm
        else
            mediaMenor := mediaEng
    else
        if (mediaCom < mediaEng) then
            mediaMenor := mediaCom
        else
            mediaMenor := mediaEng;            

    writeln ('Número de alunos por curso: ');
    writeln;
    writeln ('1. Engenharia: ', engAlunos);
    writeln ('2. Computação: ', comAlunos);
    writeln ('3. Administração: ', admAlunos);
    writeln;
    writeln ('Número de alunos com idade entre 20 e 25 anos:');
    writeln;
    writeln ('1. Engenharia: ', eng20_25);
    writeln ('2. Computação: ', com20_25);
    writeln ('3. Administração: ', adm20_25);
    writeln;
    writeln ('Curso com a menor média de idade: ', mediaMenor:0:2);
    writeln;
end.