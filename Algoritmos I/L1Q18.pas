program Q18L1;
//Faça um algoritmo que lê o tempo de duração de um evento em uma fábrica expressa em segundos e mostre-o expresso em horas, minutos e segundos.

var
  evento, tempoHoras, tempoMinutos, tempoSegundos: integer;
begin
  write ('Tempo de duração do evento (em segundos): ');
  readln (evento);
  
  tempoMinutos := evento div 60;
  tempoHoras := tempoMinutos div 60;
  tempoSegundos := tempoMinutos mod 60;

  writeln ('Tempo: ', horas, 'h, ' minutos, 'm e ', segundos, 's.');
  
end.