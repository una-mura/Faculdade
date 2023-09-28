program Q14L2;
//Escreva um programa que calcule o menor número de notas e de moedas que deve ser dado de troco para um pagamento efetuado. 
//O programa deve ler o valor a ser pago e o valor efetivamente pago. 
//Suponha que o troco seja dado em notas de 2, 5, 10, 20 e 50 reais e em moedas de 1 real e de 1, 5, 10, 25 e 50 centavos.

var
  valorPago, valorEfetPago, trocoTotal: real;
  trocoNotas, trocoMoedas, qtdNotas, qtdMoedas: integer;

begin

  writeln ('Qual o valor a ser pago?');
  read (valorPago);
  writeln ('Qual o valor fornecido?');
  read (valorEfetPago);
  trocoTotal := valorEfetPago-valorPago
  trocoNotas := trunc(trocoTotal); 
  if trocoNotas <= 0 then
    write ('Não há troco para enteegar.')
  else //cálculo do troco
  begin
    qtdNotas := trocoNotas div 50;
    if qtdNotas > 0 then
      writeln(qtdNotas, 'notas de 50 reais');
    trocoNotas := trocoNotas mod 50;

    qtdNotas := trocoNotas div 20;
    if qtdNotas > 0 then
      writeln(qtdNotas, 'notas de 20 reais');
    trocoNotas := trocoNotas mod 20;

    qtdNotas := trocoNotas div 10;
    if qtdNotas > 0 then
      writeln(qtdNotas, 'notas de 10 reais');
    trocoNotas := trocoNotas mod 10;

    qtdNotas := trocoNotas div 5;
    if qtdNotas > 0 then
      writeln(qtdNotas, 'notas de 5 reais');
    trocoNotas := trocoNotas mod 5;

    qtdNotas := trocoNotas div 2;
    if qtdNotas > 0 then
      writeln(qtdNotas, 'notas de 2 reais');
    trocoNotas := trocoNotas mod 2;

    qtdMoedas := trocoMoedas div 100;
    if qtdMoedas > 0 then
      writeln(qtdMoedas, 'moedas de 1 real');
    trocoMoedas := trocoMoedas mod 100;
  end;
    
  end;

  trocoMoedas := trocoNotas*100
  if trocoMoedas >= 0 then
  begin
    qtdMoedas := trocoMoedas div 50;
    if qtdMoedas > 0 then
      writeln(qtdMoedas, 'moedas de 50 centavos');
    trocoMoedas := trocoMoedas mod 50;

    qtdMoedas := trocoMoedas div 25;
    if qtdMoedas > 0 then
      writeln(qtdMoedas, 'moedas de 25 centavos');
    trocoMoedas := trocoMoedas mod 25;

    qtdMoedas := trocoMoedas div 10;
    if qtdMoedas > 0 then
      writeln(qtdMoedas, 'moedas de 10 centavos');
    trocoMoedas := trocoMoedas mod 10;

    qtdMoedas := trocoMoedas div 5;
    if qtdMoedas > 0 then
      writeln(qtdMoedas, 'moedas de 5 centavos');
    trocoMoedas := trocoMoedas mod 5;

    qtdMoedas := trocoMoedas div 1;
    if qtdMoedas > 0 then
      writeln(qtdMoedas, 'moedas de 1 centavo');
    trocoMoedas := trocoMoedas mod 1;
  end;

end.