program Q14L1;
//Escreva um algoritmo para calcular o consumo médio de um automóvel (medido em Km/l), dado que são conhecidos a distância total percorrida
//e o volume de combustível consumido para percorrê-la (medido em litros).

var
  consumo, distancia, volume: real;
begin
  write ('Distância percorrida (em quilômetros): ');
  readln (distancia);
  write ('Combustível gasto (em litros: ');
  readln (volume);
  
  consumo := distancia/volume;
  write ('O consumo é de: ', consumo, ' km/l.');
  
end.