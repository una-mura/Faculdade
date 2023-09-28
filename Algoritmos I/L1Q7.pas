program Q7L1;
//A conversão de graus Fahrenheit para Centígrados é obtida por (C = 5 (F - 32) / 9). 
//Faça um algoritmo que lê a temperatura em Fahrenheit e mostra a respectiva temperatura em Celsius.

var
  F, C: real;
begin
  write ('Insira um valor em fahrenheit: ');
  readln (F);
  C = (5/9)*(F-32);
  write ('Equivalente em celsius: ', C:0:2);
  
end.