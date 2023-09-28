program Q11L1;
//Calcular a quantidade de dinheiro gasto por um fumante. 
//Dados: o número de anos que ele fuma, o número de cigarros fumados por dia e o preço de uma carteira.

var
  dinheiroGasto, precoCarteira: real;
  anosFumando, cigFumPorDia: integer;
begin
  write ('Preço de uma carteira de cigarro: ');
  readln (precoCarteira);
  write ('Cigarros fumados por dia: ');
  readln (cigFumPorDia);
  write ('Tempo como fumante (em anos): ');
  readln (anosFumando);

  if (anosFumando <= 0) or (precoCarteira <= 0) then
    write ('Dados inválidos!')
  else
    if (cigFumPorDia <= 0) then
      write ('A pessoa não é fumante!')
    else  
    begin
      dinheiroGasto := ((((cigFumPorDia/20)*precoCarteira)*365)*anosFumando);
      write ('O dinheiro gasto pelo fumante é de: R$ ', dinheiroGasto:0:2)
    end;
end.