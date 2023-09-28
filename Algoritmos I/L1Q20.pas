program Q20L1;
//Uma companhia de carros paga a seus empregados um salário de R$ 1600,00 por mês mais uma comissão de R$ 150,00 para cada carro vendido e mais 5% do valor da venda.
//Elabore um algoritmo para calcular e imprimir o salário do vendedor num dado mês recebendo como dados de entrada o nome do vendedor, 
//o número de carros vendidos e o valor total das vendas.

const
  salarioBase = 1600;
  comission = 150;
  bonus = 0.5;
var
  valorVendas, salario: real;
  nome: string;
  numCarros: integer;

begin
  write ('Vendedor: ');
  readln (nome);
  write ('Número de carros vendidos: ');
  readln (numCarros);
  write ('Valor total das vendas: ');
  readln (valorVendas);

  salario := (salarioBase + (comission*numCarros) + (valorVendas + (valorVendas*bonus)));
  writeln ('Salario de ', nome, ': R$', salario);

end.