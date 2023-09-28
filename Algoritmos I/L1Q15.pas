program Q15L1;
//Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer no plano, P(x1,y1) e P(x2,y2), escreva a distância entre eles. 
//A fórmula que efetua tal cálculo é: d = sqrt(((x2 - x1)^2) + ((y2 - y1)^2)).

var
  x1, y1, x2, y2, d: real;
begin
  writeln ('Forneça os dados do ponto um (P1)');
  write ('P1 em x: ');
  readln (x1);
  write ('P1 em y: ');
  readln (y1);

  writeln ('Forneça os dados do ponto dois (P2)')
  write ('P2 em x: ');
  readln (x2);
  write ('P2 em y: ');
  readln (y2);

  d := qrt(((x2 - x1)^2) + ((y2 - y1)^2));

  write ('A distância entre os pontos é de ', d)
  
end.