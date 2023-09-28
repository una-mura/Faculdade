program Q12L1;
//Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. 
//Considerar ano com 365 dias e mês com 30 dias.

var
  idadeAnos. idadeMeses, idadeDias, idadeTotal: integer;
begin
  write ('Idade em anos: ');
  readln (idadeAnos);
  write ('Meses desde o aniversário: ');
  readln (idadeMeses);
  write ('Dias desde o dia deste mês equivalente ao dia do seu aniversário: ');
  
  if (idadeAnos < 0) or (idadeMeses < 0) or (idadeDias < 0) then
    write ('Valores inválidos!')
  else
  begin
    idadeTotal := (((idadeAnos*12) + (idadeMeses))*30 + idadeDias);
    write ('Sua idade em dias é: ', idadeTotal)
  end;
  
end.