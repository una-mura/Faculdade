program Q17L1;
//Faça um algoritmo que lê a idade de uma pessoa expressa em dias e mostre-a expressa em anos, meses e dias.

var
  idadeTotal, idadeAnos, idadeMeses, idadeDias: integer;
begin
  write ('Forneça sua idade em dias: ')
  readln (idadeTotal)
  
   if (idadeTotal < 0) then
    write ('Valor inválido!')
  else
  begin
    idadeAnos := idadeTotal div 365;
    idadeMeses := (idadeTotal mod 365) div 30;
    idadeDias := (idadeTotal mod 365) mod 30;
    write ('Você têm ', idadeAnos, ' anos, ', idadeMeses, ' meses e ', idadeDias, ' dias.');
  end;

end.