program escola_15;
var
    nota1, nota2, media, soma, mediaSoma: real;
    i, rep, rec, ap: integer;
begin
    soma := 0;
    rep := 0;
    rec := 0;
    ap := 0;

    for i := 1 to 5 do
    begin

        writeln ('Aluno ', i);

        write ('Nota Um: ');
        readln (nota1);
        write ('Nota Dois: ');
        readln (nota2);

        media := (nota1 + nota2) / 2;
        writeln ('Média: ', media:0:2);
        soma := soma + (nota1 + nota2);

        if (media < 4) then
        begin
            writeln ('Situação: Reprovada(o)');
            rep := rep + 1;
        end

        else

        if ((media >= 4) and (media < 7)) then
        begin
            writeln ('Situação: Em Recuperação');
            rec := rec + 1;
        end
            
        else

        begin
            writeln ('Situação: Aprovada(o)');
            ap := ap + 1;
        end

    end;

    writeln ('Alunos Aprovados: ', ap);
    writeln ('Alunos Reprovados: ', rep);
    writeln ('Alunos em recuperação: ', rec);

    mediasoma := soma / i;
    write ('Média da turma: ', mediasoma:0:1)

end.