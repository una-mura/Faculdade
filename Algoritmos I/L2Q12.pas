program Q12L2;
//Construa um programa que receba os códigos (caracteres) e os preços unitários (em reais) de três produtos de uma loja. 
//O programa deverá informar, com mensagens explicativas:

//a) o código e o preço dos produtos com preço unitário superior a 20 reais;
//b) o código e o preço dos produtos com preço unitário inferior a 10 reais;
//c) o preço médio dos produtos;
//d) o código e o preço dos produtos com preço inferior à média.

var
  codigo0, codigo1, codigo2: string;
  preco0, preco1, preco2, media: real;
begin
  writeln ('Informe o código dos produtos');

  write ('Código 0 (ex: 000): ');
  readln (codigo0);
  write ('Preço do produto (em reais): ');
  readln (preco0);
  write ('Código 1 (ex: 000): ');
  readln (codigo1);
   write ('Preço do produto (em reais): ');
  readln (preco1);
  write ('Código 2 (ex: 000): ');
  readln (codigo2);
   write ('Preço do produto (em reais): ');
  readln (preco2);

end.