program Q6L1;
//O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). 
//Supondo que a percentagem do distribuidor seja de 12% e os impostos de 45%, não cumulativos, preparar um algoritmo para ler o custo de fábrica do carro e 
//imprimir o custo ao consumidor.

var
  CustoFab, PercentDist, Impostos, CustoFinal: real;
begin
  write ('Insira o custo de fabricação do automóvel: ');
  readln (CustoFab);

  PercentDist := 0.12*CustoFab;
  Impostos := 0.45*CustoFab;
  CustoFinal := CustoFab + Impostos + PercentDist;

  write (CustoFinal);
end.  