program Q16L1;
//Faça um algoritmo que lê a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.

var
  idadeAnos. idadeMeses, idadeDias, idadeTotal, mesesPorAno, diasPorMes: integer;
begin
  write ('Anos: ');
  readln (idadeAnos);
  write ('Meses: ');
  readln (idadeMeses);
  write ('Dias: ');
  readln (idadeDias);
  write ('Meses por ano: ');
  readln (mesesPorAno);
  write ('Dias por mês: ');
  readln (diasPorMes);
  
  if (idadeAnos < 0) or (idadeMeses < 0) or (idadeDias < 0) then
    write ('Valores inválidos!')
  else
  begin
    idadeTotal := (((idadeAnos*mesesPorAno) + (idadeMeses))*diasPorMes + idadeDias);
    write ('Sua idade em dias é: ', idadeTotal)
  end;
  
end.